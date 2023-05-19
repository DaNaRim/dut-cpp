//https://dn.dut.edu.ua/mod/resource/view.php?id=29552

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void pz17_classExample() {
    srand(time(NULL)); // seed random number generator

    float **array = new float *[2];

    // create 2 arrays with 3 elements
    for (int i = 0; i < 2; i++) {
        array[i] = new float[5];
    }

    // fill array with random numbers
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = (rand() % 10 + 1) / float(rand() % 10 + 1);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "\t" << setprecision(1) << array[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete[] array[i];
    }
    delete[] array;
}

void pz17_1_one_dimensional_arrays_and_dynamic_memory() {
    srand(time(NULL)); // seed random number generator

    //create one dimensional dynamic array with 10 elements
    float *array = new float[10];

    //fill array with random numbers in range (-2; 2)
    float *arrayPointer = &array[0];
    for (int i = 0; i < 10; i++) {
        *arrayPointer = roundf(((float) rand() / RAND_MAX * 4 - 2) * 10) / 10;
        arrayPointer++;
    }

    //print array
    for (int i = 0; i < 10; i++) {
        cout.width(5);
        cout << setprecision(1) << array[i];
    }
    cout << endl;

    //count positive elements
    int positiveElements = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            positiveElements++;
        }
    }
    cout << "Positive elements: " << positiveElements << endl;

    //count negative elements
    int negativeElements = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] < 0) {
            negativeElements++;
        }
    }
    cout << "Negative elements: " << negativeElements << endl;

    //delete array
    delete[] array;
}

void pz17_2_two_dimensional_arrays_and_dynamic_memory() {
    srand(time(NULL)); // seed random number generator

    int matrixXLength = 3;
    int matrixYLength = 3;
    int cellWidth = 3;

    //create two-dimensional dynamic matrix with 3 rows and 3 columns
    int **matrix = new int *[matrixXLength];

    for (int i = 0; i < 3; i++) {
        matrix[i] = new int[matrixYLength];
    }

    //fill matrix with random numbers in range (10; 10)
    for (int i = 0; i < matrixXLength; i++) {
        for (int j = 0; j < matrixYLength; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    //print matrix
    for (int i = 0; i < matrixXLength; i++) {
        for (int j = 0; j < matrixYLength; j++) {
            cout.width(cellWidth);
            cout << matrix[i][j];
        }
        cout << endl;
    }

    //print main diagonal using pointers
    cout << "Main diagonal: ";

    for (int i = 0; i < matrixXLength; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout.width(cellWidth);
            cout << "  ";
        }
        cout.width(cellWidth);
        cout << matrix[i][i];
    }
    cout << endl;

    //print secondary diagonal using pointers
    cout << "Secondary diagonal: ";
    for (int i = 0; i < matrixXLength; i++) {
        cout << endl;
        for (int j = 0; j < matrixYLength - i - 1; j++) {
            cout.width(cellWidth);
            cout << "  ";
        }
        cout.width(cellWidth);
        cout << matrix[i][matrixYLength - i - 1];
    }
    cout << endl;

    //print count of even numbers using pointers
    int evenCount = 0;
    for (int i = 0; i < matrixXLength * matrixYLength; i++) {
        if (matrix[i / matrixXLength][i % matrixYLength] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Even numbers count: " << evenCount << endl;

    //print count of odd numbers using pointers
    int oddCount = matrixXLength * matrixYLength - evenCount;
    cout << "Odd numbers count: " << oddCount << endl;

    //delete matrix
    for (int i = 0; i < matrixXLength; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    pz17_classExample();
    pz17_1_one_dimensional_arrays_and_dynamic_memory();
    pz17_2_two_dimensional_arrays_and_dynamic_memory();

    return 0;
}
