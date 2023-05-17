//https://drive.google.com/file/d/1O7cEsfA_wJj2YwhGMVuBqXremsA-fOEH/view?usp=share_link

#include <iostream>

using namespace std;

class IPAddress {
protected:
    string ip;
public:
    IPAddress(string ip) : ip(ip) {}

    IPAddress(const IPAddress &ipAddress) {
        this->ip = ipAddress.ip;
    }

    virtual void print() {
        cout << ip;
    }
};

class IPAddressChecked : public IPAddress {
private:
    bool correct;

    bool isCorrect(string ip) {
        string s = ip;
        string delimiter = ".";
        size_t pos = 0;
        string token;
        int count = 0;
        while ((pos = s.find(delimiter)) != string::npos) {
            token = s.substr(0, pos);
            if (stoi(token) > 255) {
                return false;
            }
            count++;
            s.erase(0, pos + delimiter.length());
        }
        if (stoi(s) > 255) {
            return false;
        }
        count++;

        if (count != 4) {
            return false;
        }
        return true;
    }

public:
    IPAddressChecked(const string &ip) : IPAddress(ip) {}

    void print() {
        IPAddress::print();
        if (isCorrect(IPAddress::ip)) {
            cout << " - Correct" << endl;
        } else {
            cout << " - Not Correct" << endl;
        }
    }
};

int main() {
    IPAddress ip1 = IPAddress("1.2.3.4");
    ip1.print();
    cout << endl;
    IPAddressChecked ip2 = IPAddressChecked("999.29.29.29");
    ip2.print();
    IPAddressChecked ip3 = IPAddressChecked("199.29.29.29");
    ip3.print();

    return 0;
}
