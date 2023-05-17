//https://drive.google.com/drive/u/1/folders/1CxCb9PI_TSdCYTCZj-chVZkL7qYiC_dN

#include <iostream>
#include <iomanip>

using namespace std;

void cl161_6_operatorsAndExpressions() {
    int value;
    cout << "Enter a value: ";
    cin >> value;

    bool answer = value % 2 == 0;
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}

void cl161_7_printingData() {
    double n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    cout << fixed << setprecision(1) << n1 << endl;
    cout << fixed << setprecision(2) << n2 << endl;
    cout << fixed << setprecision(6) << n3 << endl;
    cout << fixed << setprecision(2) << n4 << endl;
    cout << (int) n5 << endl;
}

void cl161_8_nearZeroFloatNumbers() {
    double epsilon = 0.000001;

    int n1, n2;
    cin >> n1 >> n2;

    if (n1 / 1 - n2 / 1 < epsilon) {
        cout << fixed << "Results are equal (by " << epsilon << " epsilon)" << endl;
    } else {
        cout << fixed << "Results are not equal (by " << epsilon << " epsilon)" << endl;
    }
}

void cl161_9_gettingInputFromUser() {
    int part1, part2, part3, part4;
    cin >> part1 >> part2 >> part3 >> part4;

    cout << part1 << "." << part2 << "." << part3 << "." << part4 << endl;
}

int main() {
//    cl161_6_operatorsAndExpressions();
//    cl161_7_printingData();
//    cl161_8_nearZeroFloatNumbers();
//    cl161_9_gettingInputFromUser();

    return 0;
}
