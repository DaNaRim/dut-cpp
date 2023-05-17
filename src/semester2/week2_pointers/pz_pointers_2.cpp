//https://dn.dut.edu.ua/mod/resource/view.php?id=29553

#include <iostream>

using namespace std;

void pz15_3_pointers_and_arrays() {
    int matrix[10][10] = {};
    int cellWidth = 4; //width of each cell in matrix that will be printed

    int matrixXLength = sizeof(matrix) / sizeof(matrix[0]);
    int matrixYLength = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    //fill matrix with random numbers using pointers
    int *matrixPointer = &matrix[0][0];
    for (int i = 0; i < matrixXLength * matrixYLength; i++) {
        *matrixPointer = rand() % 100;
        matrixPointer++;
    }

    //print matrix using pointers
    matrixPointer = &matrix[0][0];
    for (int i = 0; i < matrixXLength * matrixYLength; i++) {
        cout.width(cellWidth);
        cout << *matrixPointer;
        matrixPointer++;

        if ((i + 1) % matrixXLength == 0) {
            cout << endl;
        }
    }

    //print main diagonal using pointers
    cout << "Main diagonal: ";
    matrixPointer = &matrix[0][0];
    for (int i = 0; i < matrixXLength; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout.width(cellWidth);
            cout << "  ";
        }
        cout.width(cellWidth);
        cout << *matrixPointer;
        matrixPointer += 11;
    }
    cout << endl;

    //print secondary diagonal using pointers
    cout << "Secondary diagonal: ";
    matrixPointer = &matrix[0][9];
    for (int i = 0; i < matrixXLength; i++) {
        cout << endl;
        for (int j = 0; j < matrixXLength - i - 1; j++) {
            cout.width(cellWidth);
            cout << "  ";
        }
        cout.width(4);
        cout << *matrixPointer;
        matrixPointer += 9;
    }
    cout << endl;

    //print count of even numbers using pointers
    matrixPointer = &matrix[0][0];
    int evenCount = 0;
    for (int i = 0; i < matrixXLength * matrixYLength; i++) {
        if (*matrixPointer % 2 == 0) {
            evenCount++;
        }
        matrixPointer++;
    }
    cout << "Even numbers count: " << evenCount << endl;

    //print count of odd numbers using pointers
    int oddCount = matrixXLength * matrixYLength - evenCount;
    cout << "Odd numbers count: " << oddCount << endl;
}

int main() {
    pz15_3_pointers_and_arrays();

    return 0;
}
