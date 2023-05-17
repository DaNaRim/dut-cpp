//https://drive.google.com/file/d/1LIHC5TMHsHOKirZMOXrn6_uwcdRa3iPD/view?usp=share_link

#include <iostream>

using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0) {
        throw DivideByZero;
    }
    return arg1 / arg2;
}

float div(float &res, float arg1, float arg2) {
    if (arg2 == 0.0) {
        return false;
    }
    res = internaldiv(arg1, arg2);
    return true;
}

int main() {
    float r, a, b;
    while (cin >> a) {
        cin >> b;
        if (div(r, a, b)) {
            cout << "res1 " << r << endl;
        } else {
            cout << "Are you kidding me?" << endl;
        }

        try {
            r = internaldiv(a, b);
            cout << "res2 " << r << endl;
        } catch (const int &e) {
            cout << "Error: " << e << endl;
        }
    }
    return 0;
}
