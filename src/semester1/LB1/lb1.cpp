//https://dn.dut.edu.ua/pluginfile.php/22845/mod_resource/content/1/lab-1.pdf

#include <iostream>
#include <cmath>

using namespace std;

void lab1_v11_evalFun(double a, double b) {
    double result = pow((0.719 / b) * ((b * b - a * a) / (a * a + b * b)) + cos(log(b) * M_PI / 6), (double) 1 / 3);
    cout << "lab1_v11 Result: " << result << endl;
}

void lab1_v13_evalFun(double a, double b) {
    double result = pow(a * a / b * b * b, (double) 2 / 3)
                    * pow(M_E, (0.807 * (int) (1 - pow(sin((a - b) * M_PI / 4), 2)))
                               / 0.312 * (int) (1 + pow(cos((b + a) * M_PI / 4), 2)));
    cout << "lab1_v13 Result: " << result << endl;
}

void lab1_v18_evalFun(double a, double b) {
    double result = pow((a - b) / (b + a) * pow(M_E, log(floor(cos(a - b) * (M_PI / 8))) / 0.137), (double) 1 / 3);
    cout << "lab1_v18 Result: " << result << endl;
}

int main() {
//    lab1_v11_evalFun(1, 20.01);
//    lab1_v13_evalFun(3, 2.712);
//    lab1_v18_evalFun(1, 0.001);

    return 0;
}
