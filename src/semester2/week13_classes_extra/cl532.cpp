//https://drive.google.com/file/d/1ZsdiANlxD7BWoIWJ8xG8eisf4kgBfD8q/view?usp=share_link
//https://drive.google.com/file/d/1XITpC9Nsp5-hvWqkYjQJNZLhuXfjTIEB/view?usp=share_link

#include "iostream"

using namespace std;

class FlightBooking2 {
public:
    FlightBooking2(int id, int capacity, int reserved) {
        if (reserved > capacity) {
            cout << "reserved cannot be greater than capacity" << endl;
            return;
        }

        this->id = id;
        this->capacity = capacity;
        this->reserved = reserved;
    }


    void printStatus() {
        cout << "Flight " << id << ": " << reserved << "/" << capacity << " (" << (reserved * 100 / capacity)
             << "%) seats taken" << endl;
    }

    void add(int n) {
        if (reserved + n > capacity * 1.05) {
            cout << "Cannot reserve more seats than the capacity of the flight!" << endl;
            return;
        }
        reserved += n;
    }

    void cancel(int n) {
        if (reserved - n < 0) {
            cout << "Cannot cancel more seats than the reserved seats!" << endl;
            return;
        }
        reserved -= n;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        FlightBooking2::id = id;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int newCapacity) {
        FlightBooking2::capacity = newCapacity;
    }

    int getReserved() {
        return reserved;
    }

    void setReserved(int newReserved) {
        FlightBooking2::reserved = newReserved;
    }

private:
    int id;
    int capacity;
    int reserved;
};

int main() {
    FlightBooking2 booking(1, 45, 30);

    std::string command = "";
    while (command != "quit") {
        booking.printStatus();
        std::cout << "What would you like to do?: ";
        std::cin >> command;

        if (command == "add") {
            int num;
            std::cout << "How many seats do you want to add?: ";
            std::cin >> num;
            booking.add(num);
        } else if (command == "cancel") {
            int num;
            std::cout << "How many seats do you want to cancel?: ";
            std::cin >> num;
            booking.cancel(num);
        } else if (command != "quit") {
            break;
        } else {
            std::cout << "Unknown command" << std::endl;
        }
    }

    return 0;
}
