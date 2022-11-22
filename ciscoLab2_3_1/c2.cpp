//
// Created by DaNaRim on 22.11.2022.
//

#include "c2.h"

#include <iostream>
#include <valarray>

using namespace std;

void task2_6() {
    int num;
    cin >> num;

    int countOperations = 0;

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        cout << num << endl;
        countOperations++;
    }
    cout << "Count of operations: " << countOperations << endl;
}

void task2_7() {
    int countIterations;
    cin >> countIterations;

    double pi = 0;

    for (int i = 0; i < countIterations; i++) {
        pi += pow(-1, i) / (2 * i + 1);
    }
    pi *= 4;

    cout.precision(20);
    cout << "Pi: " << pi << endl;
}

void task2_10() {
    int squareSize;

    while (squareSize <= 1 || squareSize > 20) {
        cout << "Enter square size: ";
        cin >> squareSize;
        if (squareSize <= 1 || squareSize > 20) {
            cout << "Incorrect size. Must be greater than 1 and less than 20" << endl;
        }
    }

    for (int i = 0; i < squareSize; i++) {
        for (int j = 0; j < squareSize; j++) {
            if (i == 0 || i == squareSize - 1) {
                if (j == 0 || j == squareSize - 1) {
                    cout << "+";
                } else {
                    cout << "-";
                }
            } else {
                if (j == 0 || j == squareSize - 1) {
                    cout << "|";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}