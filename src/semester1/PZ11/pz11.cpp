//https://dn.dut.edu.ua/pluginfile.php/22863/mod_resource/content/1/pz-11.pdf

#include "iostream"

using namespace std;

void pz11_1_sort_ask() {
    int arrayLength = 12;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100;
    }

    cout << "Unsorted array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arrayLength; i++) {
        for (int j = 0; j < arrayLength; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << endl << "Sorted array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void pz11_1_sort_desc() {
    int arrayLength = 12;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100;
    }

    cout << "Unsorted array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arrayLength; i++) {
        for (int j = 0; j < arrayLength; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << endl << "Sorted array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void pz11_2_fillWithZero() {
    int arrayLength = 20;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100 - 50;
    }

    cout << "Array before: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int maxIndex = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    for (int i = 0; i < maxIndex; i++) {
        if (array[i] < 0) {
            array[i] = 0;
        }
    }

    cout << endl << "Array after: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void pz11_3_swapMinAndMax() {
    int arrayLength = 12;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100;
    }

    cout << "Array before: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;

    cout << endl << "Array after: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void pz11_4_greaterThanInput() {
    int arrayLength = 12;

    int array[arrayLength];

    int input;
    cout << "Input number: ";
    cin >> input;

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100;
    }

    cout << "Array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] > input) {
            count++;
        }
    }

    cout << "Count: " << count << endl;
}

void pz11_5_secondMax() {
    int arrayLength = 12;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 100;
    }

    cout << "Array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int max = 0;
    int secondMax = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] > max) {
            secondMax = max;
            max = array[i];
        } else if (array[i] > secondMax) {
            secondMax = array[i];
        }
    }
    cout << "Second max: " << secondMax << endl;
}

void pz11_6_findZeroIndex() {
    int arrayLength = 20;

    int array[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        array[i] = rand() % 20 - 10;
    }
//    array[5] = 0;

    cout << "Array: " << endl;
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int zeroIndex = -1;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == 0) {
            zeroIndex = i;
            break;
        }
    }

    if (zeroIndex == -1) {
        cout << "No zero in array" << endl;
    } else {
        cout << "Zero index: " << zeroIndex << endl;
    }
}

int main() {
//    pz11_1_sort_ask();
//    pz11_1_sort_desc();
//    pz11_2_fillWithZero();
//    pz11_3_swapMinAndMax();
//    pz11_4_greaterThanInput();
//    pz11_5_secondMax();
//    pz11_6_findZeroIndex();

    return 0;
}
