//
// Created by DaNaRim on 06.09.2022.
//

#include "lab1.h"

#include <iostream>
#include <cmath>

using namespace std;
using namespace numbers;

void lab1_v11_evalFun(double a, double b) {
    double result = pow((0.719 / b) * ((b * b - a * a) / (a * a + b * b)) + cos(log(b) * pi / 6), (double) 1 / 3);
    cout << "lab1_v11 Result: " << result << endl;
}

void lab1_v13_evalFun(double a, double b) {
    double result = pow(a * a / b * b * b, (double) 2 / 3)
                    * pow(e, (0.807 * (int) (1 - pow(sin((a - b) * pi / 4), 2)))
                             / 0.312 * (int) (1 + pow(cos((b + a) * pi / 4), 2)));
    cout << "lab1_v13 Result: " << result << endl;
}

void lab1_v18_evalFun(double a, double b) {
    double result = pow((a - b) / (b + a) * pow(e, log(floor(cos(a - b) * (pi / 8))) / 0.137), (double) 1 / 3);
    cout << "lab1_v18 Result: " << result << endl;
}