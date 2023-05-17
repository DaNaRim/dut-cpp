//https://drive.google.com/file/d/1H_29jdUsiofx9h3b9xJPRJPTwDe3zO5u/view?usp=share_link

#include <iostream>

using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    string toString() {
        bool isNegative = numerator * denominator < 0;
        int integerPart = abs(numerator) / denominator;
        int newNumerator = abs(numerator) % abs(denominator);
        int newDenominator = abs(denominator);

        string result = "";
        if (isNegative) {
            result += "-";
        }
        if (integerPart != 0) {
            result += to_string(integerPart);
        }
        if (newNumerator != 0) {
            if (integerPart != 0) {
                result += " ";
            }
            result += to_string(newNumerator) + "/" + to_string(newDenominator);
        }
        return result;
    }

    double toDouble() {
        return (double) numerator / denominator;
    }

private:
    int numerator;
    int denominator;
};

int main() {
    Fraction fraction1 = Fraction(1, -2);
    Fraction fraction2 = Fraction(4, 3);
    Fraction fraction3 = Fraction(8, 4);

    cout << fraction1.toString() << endl;
    cout << fraction2.toString() << endl;
    cout << fraction3.toString() << endl;

    cout << fraction1.toDouble() << endl;
    cout << fraction2.toDouble() << endl;
    cout << fraction3.toDouble() << endl;

    return 0;
}

