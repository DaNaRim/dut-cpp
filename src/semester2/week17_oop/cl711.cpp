//https://drive.google.com/file/d/1E6ic2G7ubGCyqsVNiILmNa9E4xyLmsF-/view?usp=share_link

#include <iostream>

using namespace std;

int main() {
    int a = 8, b = 0, c = 0;
    cin >> b;
    try {
        if (b == 0) {
            throw 1;
        }
        c = a / b;
        cout << c << endl;
    } catch (int e) {
        cout << "Your input is not valid, you can't divide by zero." << endl;
    }
    return 0;
}
