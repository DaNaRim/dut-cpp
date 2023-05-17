//https://drive.google.com/file/d/1_nw5sDorc0rZG3hTsYaVbRiEWpg4Hk-t/view?usp=share_link

#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder {
public:
    ShopItemOrder(string name, double unitPrice, int numberOfItems)
            : name(std::move(name)), unitPrice(unitPrice), numberOfItems(numberOfItems) {
    }

    double getTotalPrice() {
        return unitPrice * numberOfItems;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Unit price: " << unitPrice << endl;
        cout << "Number of items: " << numberOfItems << endl;
        cout << "Total price: " << getTotalPrice() << endl;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        ShopItemOrder::name = name;
    }

    double getUnitPrice() const {
        return unitPrice;
    }

    void setUnitPrice(double unitPrice) {
        ShopItemOrder::unitPrice = unitPrice;
    }

    int getNumberOfItems() const {
        return numberOfItems;
    }

    void setNumberOfItems(int numberOfItems) {
        ShopItemOrder::numberOfItems = numberOfItems;
    }

private:
    string name;
    double unitPrice;
    int numberOfItems;

};

int main() {
    ShopItemOrder shopItemOrder("Apple", 1.5, 10);
    shopItemOrder.print();
    return 0;
}
