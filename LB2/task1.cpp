//
// Created by DaNaRim on 13.09.2022.
//

#include <cmath>
#include "task1.h"


double getY6(int x, int b, int c) {
    if (x < 2) {
        return (x - 9 * b * x) / (x - 2 * b * pow(x, 2));
    } else {
        return (x - 2 * c * x) / (x - 5 * c * pow(x, 3));
    }
}