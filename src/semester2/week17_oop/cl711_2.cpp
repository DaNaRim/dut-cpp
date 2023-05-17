//https://drive.google.com/file/d/1ZamaKH5EDzH6X7ijoi7_ncp6csNhUkpD/view?usp=share_link

#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    try {
        cin >> a;
        cin >> b;

        if (b == 0) {
            throw runtime_error("Your input is not valid, you can't divide by zero.");
        }
        c = a / b;
        cout << c << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
