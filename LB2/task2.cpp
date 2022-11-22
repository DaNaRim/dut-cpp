//
// Created by DaNaRim on 13.09.2022.
//

#include "task2.h"

bool isPointInShape4(double point[1][2]) {
    int shape[5][2] = {
            {-1, 0},
            {0,  1},
            {1,  0},
            {0,  -1},
            {0,  0}
    };

    int i, j, c = 0;
    for (i = 0, j = 4; i < 5; j = i++) {
        if (((shape[i][1] > point[0][1]) != (shape[j][1] > point[0][1]))
            && (point[0][0] <
                (shape[j][0] - shape[i][0]) * (point[0][1] - shape[i][1]) / (shape[j][1] - shape[i][1]) +
                shape[i][0]))
            c = !c;
    }
    return c;
}

