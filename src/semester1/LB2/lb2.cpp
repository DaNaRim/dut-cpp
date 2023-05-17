//https://dn.dut.edu.ua/pluginfile.php/22847/mod_resource/content/1/lab-2.pdf

#include <cmath>
#include "iostream"

using namespace std;

void lab2_1_v6_evalFun(int x, int b, int c) {
    double result;
    if (x < 2) {
        result = (x - 9 * b * x) / (x - 2 * b * pow(x, 2));
    } else {
        result = (x - 2 * c * x) / (x - 5 * c * pow(x, 3));
    }
    cout << "lab2_1_v6 Result: " << result << endl;
}

void lab2_2_v4_isPointInShape(double point[1][2]) {
    int shape[5][2] = {
            {-1, 0},
            {0,  1},
            {1,  0},
            {0,  -1},
            {0,  0}
    };

    int i, j;
    bool isPointInShape = false;
    for (i = 0, j = 4; i < 5; j = i++) {
        if (((shape[i][1] > point[0][1]) != (shape[j][1] > point[0][1]))
            && (point[0][0] <
                (shape[j][0] - shape[i][0]) * (point[0][1] - shape[i][1]) / (shape[j][1] - shape[i][1]) +
                shape[i][0])) {
            isPointInShape = true;
        }
    }

    if (isPointInShape) {
        cout << "lab2_2_v4 Point is in shape" << endl;
    } else {
        cout << "lab2_2_v4 Point is not in shape" << endl;
    }
}

int main() {
    lab2_1_v6_evalFun(1, 2, 3);

//    double point[1][2] = {{-1, -2}};
//    lab2_2_v4_isPointInShape(point);

    return 0;
}
