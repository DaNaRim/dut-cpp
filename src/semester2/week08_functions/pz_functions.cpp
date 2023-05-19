//https://dn.dut.edu.ua/mod/resource/view.php?id=23241
//https://dn.dut.edu.ua/mod/resource/view.php?id=29842

#include "iostream"

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void pz20_1_isPrime(int n) {
    bool result = isPrime(n);
    if (result) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }
}

void pz20_2_printPrime() {
    for (int i = 0; i <= 21; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void increment(int &a) {
    a++;
}

void increment(int &a, int b) {
    a += b;
}

void pz20_3_increment() {
    int var = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2) {
            increment(var);
        } else {
            increment(var, i);
        }
    }
    cout << var << endl;
}

int main() {
    pz20_1_isPrime(4);
    pz20_2_printPrime();
    pz20_3_increment();

    return 0;
}
