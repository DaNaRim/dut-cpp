//https://drive.google.com/file/d/1eSOjNRHzxxLPNSe3d4vyGxIgLXyEhrnN/view?usp=share_link

#include "iostream"

using namespace std;

class AdHocSquare {
public:
    AdHocSquare(double side) {
        this->side = side;
    }

    void setSide(double newSide) {
        if (newSide <= 0) {
            cout << "Side must be positive" << endl;
            return;
        }
        this->side = newSide;
    }

    double getArea() {
        return side * side;
    }

private:
    double side;
};

class LazySquare {
public:
    LazySquare(double side) {
        this->side = side;
        this->area = side * side;
        this->side_changed = false;
    }

    void setSide(double newSide) {
        if (newSide <= 0) {
            cout << "Side must be positive" << endl;
            return;
        }
        this->side = newSide;
        this->side_changed = true;
    }

    double getArea() {
        if (side_changed) {
            area = side * side;
            side_changed = false;
        }
        return area;
    }

    bool isSideChanged() {
        return side_changed;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    AdHocSquare adHocSquare = AdHocSquare(5);
    cout << "AdHocSquare: side=" << adHocSquare.getArea() << " area=" << adHocSquare.getArea() << endl;
    adHocSquare.setSide(10);
    cout << "AdHocSquare: side=" << adHocSquare.getArea() << " area=" << adHocSquare.getArea() << endl;

    LazySquare lazySquare = LazySquare(5);
    cout << "LazySquare: side=" << lazySquare.getArea() << " area=" << lazySquare.getArea() << endl;
    cout << "Is side changed? " << lazySquare.isSideChanged() << endl;
    lazySquare.setSide(10);
    cout << "LazySquare: side=" << lazySquare.getArea() << " area=" << lazySquare.getArea() << endl;
    cout << "Is side changed? " << lazySquare.isSideChanged() << endl;

    return 0;
}
