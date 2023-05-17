//https://dn.dut.edu.ua/pluginfile.php/22864/mod_resource/content/1/pz-12.pdf

#include <iostream>
#include <climits>

using namespace std;

void pz12_1_countEvenInRow() {
    int m = 4;
    int n = 3;

    int matrix[m][n] = {
            {1,  2,  1},
            {4,  4,  4},
            {1,  1,  1},
            {10, 11, 12}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "Row " << i << " has " << count << " even numbers" << endl;
    }
}

void pz12_2_countEvenInColumn() {
    int m = 6;
    int n = 4;

    int matrix[m][n] = {
            {1,  2,  1,  2},
            {4,  4,  4,  2},
            {1,  1,  1,  2},
            {10, 11, 12, 2},
            {1,  1,  1,  2},
            {1,  1,  1,  2}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[j][i] % 2 == 0) {
                count++;
            }
        }
        cout << "Column " << i << " has " << count << " even numbers" << endl;
    }
}

void pz12_3_sumOfRow() {
    int m = 5;
    int n = 7;

    int matrix[m][n] = {
            {1,  2,  1,  2, 1, 2, 1},
            {4,  4,  4,  2, 1, 2, 1},
            {1,  1,  1,  2, 1, 2, 1},
            {10, 11, 12, 2, 1, 2, 1},
            {1,  1,  1,  2, 1, 2, 1}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
    }
}

void pz12_4_sumOfColumn() {
    int m = 4;
    int n = 6;

    int matrix[m][n] = {
            {1,  2,  1,  2, 1, 2},
            {4,  4,  4,  2, 1, 2},
            {1,  1,  1,  2, 1, 2},
            {10, 11, 12, 2, 1, 2}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += matrix[j][i];
        }
        cout << "Sum of column " << i << " is " << sum << endl;
    }
}

void pz12_5_findMaxAndIndex() {
    int m = 3;
    int n = 4;

    int matrix[m][n] = {
            {1, 2, 1, 2},
            {4, 4, 4, 2},
            {1, 1, 1, 2}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int max = INT_MIN;
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << "Max element is " << max << " at index (" << max_i << ", " << max_j << ")" << endl;
}

void pz12_6_findMinAndIndex() {
    int m = 4;
    int n = 7;

    int matrix[m][n] = {
            {1,  2,  1,  2,  1, 2,   1},
            {4,  4,  4,  -4, 1, 2,   1},
            {1,  1,  1,  2,  1, 123, 1},
            {10, 11, 12, 2,  1, 2,   1}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int min = INT_MAX;
    int min_i = 0;
    int min_j = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    cout << "Min element is " << min << " at index (" << min_i << ", " << min_j << ")" << endl;
}

void pz12_15_sumByDiagonal() {
    int m = 3;
    int n = 3;

    int matrix[m][n] = {
            {1, 2, 1},
            {4, 4, 4},
            {1, 1, 1}
    };

//    int m = 5;
//    int n = 5;
//
//    int matrix[m][n] = {
//            {1, 2, 1, 2, 1},
//            {4, 4, 4, 2, 1},
//            {1, 1, 1, 2, 1},
//            {10, 11, 12, 2, 1},
//            {1, 1, 1, 2, 1}
//    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //count sum of main diagonal and bottom diagonals
    for (int i = m - 1; i >= 0; i--) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i + j][j];
            if (i + j + 1 == m || j + 1 == n) {
                break;
            }
        }
        cout << "Sum of diagonal " << i << " is " << sum << endl;
    }
    //count sum of top diagonals
    for (int i = 1; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[j][i + j];
            if (i + j + 1 == n) {
                break;
            }
        }
        cout << "Sum of diagonal " << -i << " is " << sum << endl;
    }
}

int main() {
//    pz12_1_countEvenInRow();
//    pz12_2_countEvenInColumn();
//    pz12_3_sumOfRow();
//    pz12_4_sumOfColumn();
//    pz12_5_findMaxAndIndex();
//    pz12_6_findMinAndIndex();
//    pz12_15_sumByDiagonal();

    return 0;
}
