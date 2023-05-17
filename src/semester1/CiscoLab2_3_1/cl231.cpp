//https://drive.google.com/drive/u/1/folders/1blm2Q7FBWaqYCuSJSTBCQVkEO6ZweNUB

#include <iostream>
#include <valarray>

using namespace std;

void cl231_2_6_collatzsHypothesis() {
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

void cl231_2_7_findingValueOfPi() {
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

void cl231_2_10_drawingSquares() {
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

int main() {
//    cl231_2_6_collatzsHypothesis();
//    cl231_2_7_findingValueOfPi();
//    cl231_2_10_drawingSquares();

    return 0;
}
