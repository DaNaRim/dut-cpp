//https://drive.google.com/file/d/1acle5Mz8a1Ycp7tswGSzTOzEzlha7-ZV/view?usp=share_link

#include "iostream"

using namespace std;

class Square {
public:
    Square(double side) {
        this->side = side;
        this->area = side * side;
    }

    void print() {
        cout << "Square: side=" << side << " area=" << area << endl;
    }

    double getSide() const {
        return side;
    }

    void setSide(double newSide) {
        if (newSide <= 0) {
            cout << "Side must be positive" << endl;
            return;
        }
        Square::side = newSide;
        Square::area = side * side;
    }

private:
    double side;
    double area;
};

int main() {
    Square square = Square(5);
    square.print();
    square.setSide(10);
    square.print();

    return 0;
}
