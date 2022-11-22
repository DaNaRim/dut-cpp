//
// Created by DaNaRim on 22.11.2022.
//

#include "c1.h"

#include <iostream>
#include <iomanip>

using namespace std;

void task_c_6() {
    int value;
    cout << "Enter a value: ";
    cin >> value;

    bool answer = value % 2 == 0;
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}

void task_c_7() {
    double n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    cout << fixed << setprecision(1) << n1 << endl;
    cout << fixed << setprecision(2) << n2 << endl;
    cout << fixed << setprecision(6) << n3 << endl;
    cout << fixed << setprecision(2) << n4 << endl;
    cout << (int) n5 << endl;
}

void task_c_8() {
    double epsilon = 0.000001;

    int n1, n2;
    cin >> n1 >> n2;

    if (n1 / 1 - n2 / 1 < epsilon) {
        cout << fixed << "Results are equal (by " << epsilon << " epsilon)" << endl;
    } else {
        cout << fixed << "Results are not equal (by " << epsilon << " epsilon)" << endl;
    }
}

void task_c_9() {
    int part1, part2, part3, part4;
    cin >> part1 >> part2 >> part3 >> part4;

    cout << part1 << "." << part2 << "." << part3 << "." << part4 << endl;
}