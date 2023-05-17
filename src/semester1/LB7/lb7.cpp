//https://dn.dut.edu.ua/pluginfile.php/22882/mod_resource/content/1/lab-7%281%29.pdf

#include <cmath>
#include "iostream"

using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void lab7_1_evalFun() {
    int x;
    cout << "Enter x: ";
    cin >> x;

    double y = pow(sin(x), 5) + abs(5 * x - 1.5);

    cout << "y = " << y << endl << endl;
}

void lab7_2_v5_sumOfSquareRoots() {
    double rootSum;

    for (int i = 10; i < 20; ++i) {
        rootSum += sqrt(i);
    }
    cout << "rootSum = " << rootSum << endl << endl;
}

void lab7_3_v5_tableEvalFun() {
    int a, b, h;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter h: ";
    cin >> h;

    for (int i = a; i < b; i += h) {
        cout << "x = " << i << ", ";
        if (i < 7 || i == -5) {
            cout << "y = N" << endl;
            continue;
        }
        double y = 8 + sqrt(i - 7) / (i + 5);
        cout << "y = " << y << endl << endl;
    }
}

void lab7_4_v4_lnMaclaurinSeries() {
    int x, e;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter e: ";
    cin >> e;

    int count = 1;
    double sum = x;

    for (int i = 0; i < infinity(); ++i) {
        double part = pow(x, (count + 1)) / factorial(count + 1);

        if (abs(part) < e) break;

        if (count % 2 == 0) {
            sum += part;
        } else {
            sum -= part;
        }
        count++;
    }
    cout << "Sum = " << sum << endl << endl;
    cout << "Count = " << count << endl << endl;
}

void lab7_4_v5_findKForTrueFun() {
    int n, m;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    if (m <= 1) {
        cout << "m must be greater than 1" << endl;
        return;
    } else if (n <= m) {
        cout << "n must be greater than m" << endl;
        return;
    }

    for (int i = 0; i < infinity(); ++i) {
        if (pow(m, i) > n) {
            cout << "k = " << i << endl;
            break;
        }
    }

//    int k = 0;
//    while (pow(m, k) <= n) {
//        k++;
//    }
//    cout << "k = " << k << endl;

//    int k = 0;
//    do {
//        k++;
//    } while (pow(m, k) <= n);
//    cout << "k = " << k << endl;
}

void lab7_5_v5_sumOfDigitsGreater7() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0;
    for (int i = n; i > 0; i /= 10) {
        if (i % 10 > 3) {
            count++;
        }
    }
    cout << "Count = " << count << endl;
}

int main() {
//    lab7_2_v5_sumOfSquareRoots();
//    lab7_3_v5_tableEvalFun();
//    lab7_4_v4_lnMaclaurinSeries();
//    lab7_4_v5_findKForTrueFun();
//    lab7_5_v5_sumOfDigitsGreater7();

    return 0;
}
