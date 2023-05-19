//https://drive.google.com/file/d/1wyE3lNfoKaFvWcoy40u7uf-LeSXXwGWB/view

#include "iostream"

using namespace std;

struct Argument {
    string key;
    string value;
};

int countArgs(string values) {
    int count = 0;
    for (int i = 0; i < values.length(); i++) {
        if (values[i] == ',') {
            count++;
        }
    }
    count++;
    return count;
}

//parse values to Argument array with dynamic size method
void parseArguments(string values, int valuesCount, Argument *arguments) {
    int argumentIndex = 0;
    int keyStart = 0; // index of first char of key
    int keyEnd = 0; // index of last char of key
    int valueStart = 0; // index of first char of value
    int valueEnd = 0; // index of last char of value
    for (int i = 0; i < values.length(); i++) {
        if (values[i] == '=') {
            keyEnd = i;
            valueStart = i + 1;
        }
        if (values[i] == ',' || i == values.length() - 1) {
            if (argumentIndex == valuesCount - 1) {
                valueEnd = values.length();
            } else {
                valueEnd = i;
            }
            arguments[argumentIndex].key = values.substr(keyStart, keyEnd - keyStart);
            arguments[argumentIndex].value = values.substr(valueStart, valueEnd - valueStart);
            argumentIndex++;
            keyStart = i + 1;
        }
    }
}

string processTemplate(string templateStr, Argument *arguments, int valuesCount) {
    string result = templateStr;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] != '[') {
            continue;
        }
        int keyStart1 = i + 1;
        int keyEnd1 = 0;
        for (int j = i + 1; j < result.length(); j++) {
            if (result[j] == ']') {
                keyEnd1 = j;
                break;
            }
        }
        string key = result.substr(keyStart1, keyEnd1 - keyStart1);
        for (int j = 0; j < valuesCount; j++) {
            if (arguments[j].key == key) {
                result.replace(i, keyEnd1 - i + 1, arguments[j].value);
                break;
            }
        }
    }
    return result;
}

void cl458_1_fillTemplate() {
    string values; //person=Paul,action=strolls around,place=the park
    string templateStr; //[person] [action] [place]
    getline(std::cin, values);
    getline(std::cin, templateStr);

    int valuesCount = countArgs(values);

    Argument *arguments = new Argument[valuesCount];
    parseArguments(values, valuesCount, arguments);

    string result = processTemplate(templateStr, arguments, valuesCount);

    cout << result << endl;
}

int main() {
    /*
Example input
person=Paul,action=strolls around,place=the park
[person] [action] [place]
Example output
Paul strolls around the park

Example input
customer=John,pet=dog
Dear [customer], we were happy to take care of your [pet] while you were away. Please call our pet hotel again if you need help with your [pet]!
Example output
Dear John, we were happy to take care of your dog while you were away. Please call our pet hotel again if you need help with your dog!

Example input
date=02/02/02 3:00PM,room=504
Dear [customer], your exam will take place on [date] in room [room]
Example output
Dear [customer], your exam will take place on 02/02/02 3:00PM in room 504
     */

    cl458_1_fillTemplate();

    return 0;
}
