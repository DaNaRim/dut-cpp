//https://dn.dut.edu.ua/mod/resource/view.php?id=22928

#include <iostream>

using namespace std;

void pz15_1_one_dimensional_arrays_and_pointers() {
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof(vector) / sizeof(vector[0]);

    int *min = vector;
    for (int i = 0; i < n; i++) {
        if (vector[i] < *min) {
            min = &vector[i];
        }
    }
    cout << "Minimum element: " << *min << endl;
}

void pz15_2_two_dimensional_arrays_and_pointers() {
    int matrix[10][10] = {};

    int *matrixPointer = &matrix[0][0];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *matrixPointer = (i + 1) * (j + 1);
            matrixPointer++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    pz15_1_one_dimensional_arrays_and_pointers();
    pz15_2_two_dimensional_arrays_and_pointers();

    return 0;
}
