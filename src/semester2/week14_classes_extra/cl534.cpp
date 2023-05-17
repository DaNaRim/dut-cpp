//https://drive.google.com/file/d/1NmLxl7PS0ak6D3K1FpHmn7tOvz8F_QkN/view?usp=share_link

#include <iostream>

using namespace std;

class GymCard {
private:
    int id;
    string name;
    int validMonth;

public:
    GymCard() {
        this->id = id;
        this->name = name;
        this->validMonth = validMonth;
    }

    GymCard(int id, string name, int validMonth) {
        this->id = id;
        this->name = name;
        this->validMonth = validMonth;
    }

    void print() {
        cout << "ID: " << id << ", "
                  << "Name: " << name << ", "
                  << "Valid month: " << validMonth << endl;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        GymCard::id = id;
    }

    const string &getName() {
        return name;
    }

    void setName(string &name) {
        GymCard::name = name;
    }

    int getValidMonth() {
        return validMonth;
    }

    void setValidMonth(int validMonth) {
        GymCard::validMonth = validMonth;
    }
};

int main() {
    GymCard cards[10];

    cards[0] = GymCard(1, "Smith", 1);
    cards[1] = GymCard(2, "Doe", 2);
    cards[2] = GymCard(3, "Doe", 3);

    string command = "";
    while (command != "quit") {
        for (int i = 0; i < 10; ++i) {
            if (cards[i].getName() == "") {
                cout << "[No card]" << endl;
            } else {
                cards[i].print();
            }
        }
        cout << "What would you like to do?: ";
        cin >> command;

        if (command == "create") {
            for (int i = 0; i < 10; ++i) {
                if (cards[i].getName() == "") {
                    int id = rand() % 100000;

                    string name;
                    cout << "Enter name: ";
                    cin >> name;

                    GymCard card = GymCard(id, name, 0);
                    cards[i] = card;

                    goto loopEnd;
                }
            }
            cout << "Cannot perform this operation: no free space" << endl;
        } else if (command == "delete") {
            int id;
            cout << "Enter id: ";
            cin >> id;
            for (int i = 0; i < 10; ++i) {
                if (cards[i].getId() == id) {
                    cards[i] = GymCard();
                    goto loopEnd;
                }
            }
            cout << "Cannot perform this operation: no such id" << endl;
        } else if (command == "extend") {
            int id;
            int n;
            cout << "Enter id: ";
            cin >> id;
            cout << "Enter n: ";
            cin >> n;
            for (int i = 0; i < 10; ++i) {
                if (cards[i].getId() == id) {
                    cards[i].setValidMonth(cards[i].getValidMonth() + n);
                    goto loopEnd;
                }
            }
            cout << "Cannot perform this operation: no such id" << endl;
        } else if (command == "cancel") {
            int id;
            cout << "Enter id: ";
            cin >> id;
            for (int i = 0; i < 10; ++i) {
                if (cards[i].getId() == id) {
                    cards[i].setValidMonth(0);
                    goto loopEnd;
                }
            }
            cout << "Cannot perform this operation: no such id" << endl;
        } else if (command == "quit") {
            break;
        } else {
            cout << "Unknown command" << endl;
        }
        loopEnd:;
    }

    return 0;
}
