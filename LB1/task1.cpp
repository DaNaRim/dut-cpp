//
// Created by DaNaRim on 06.09.2022.
//

#include "task1.h"

#include <iostream>
#include <cmath>

using namespace std;
using namespace numbers;

double f11(double a, double b) {
    return pow((0.719 / b) * ((b * b - a * a) / (a * a + b * b)) + cos(log(b) * pi / 6), (double) 1 / 3);
}

double f13(double a, double b) {
    return pow(a * a / b * b * b, (double) 2 / 3)
           * pow(e, (0.807 * (int) (1 - pow(sin((a - b) * pi / 4), 2)))
                    / 0.312 * (int) (1 + pow(cos((b + a) * pi / 4), 2)));
}

double f18(double a, double b) {
    return pow((a - b) / (b + a) * pow(e, log(floor(cos(a - b) * (pi / 8))) / 0.137), (double) 1 / 3);
}