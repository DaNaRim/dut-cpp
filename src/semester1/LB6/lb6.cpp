//https://dn.dut.edu.ua/pluginfile.php/22867/mod_resource/content/1/lab-6.pdf

#include <iostream>

using namespace std;

void lab6_1_v6_countDigitsGreater3(int n) {
    int count = 0;
    for (int i = n; i > 0; i /= 10) {
        if (i % 10 > 3) {
            count++;
        }
    }
    cout << "In " << n << " digits greater that three = " << count << endl;
}

void lab6_2_v6_tramStops(int tramNum) {
    switch (tramNum) {
        case 1: {
            cout << R"(Tram 1 first stop is "Red" and last stop is "Red")" << endl;
            break;
        }
        case 2: {
            cout << R"(Tram 2 first stop is "Red" and last stop is "Blue")" << endl;
            break;
        }
        case 3: {
            cout << R"(Tram 3 first stop is "Red" and last stop is "Green")" << endl;
            break;
        }
        case 4: {
            cout << R"(Tram 4 first stop is "Red" and last stop is "Yellow")" << endl;
            break;
        }
        case 5: {
            cout << R"(Tram 5 first stop is "Blue" and last stop is "Red")" << endl;
            break;
        }
        case 6: {
            cout << R"(Tram 6 first stop is "Blue" and last stop is "Blue")" << endl;
            break;
        }
        case 7: {
            cout << R"(Tram 7 first stop is "Blue" and last stop is "Green")" << endl;
            break;
        }
        default: {
            cout << "Tram not found" << endl;
        }
    }
}

int main() {
//    lab6_1_v6_countDigitsGreater3(123456);
//    lab6_2_v6_tramStops(1);

    return 0;
}
