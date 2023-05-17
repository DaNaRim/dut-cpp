//https://drive.google.com/file/d/1kajBO248h-eso2dXiNOutw2VVkoWZ1r5/view?usp=share_link

#include <iostream>

using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved) {
        this->id = id;
        this->capacity = capacity;
        this->reserved = reserved;
    }

    void printStatus() {
        cout << "Flight " << id << ": " << reserved << "/" << capacity << " (" << (reserved * 100 / capacity)
             << "%) seats taken" << endl;
    }

    int getId() {
        return id;
    }

    void setId(int newId) {
        id = newId;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int newCapacity) {
        capacity = newCapacity;
    }

    int getReserved() {
        return reserved;
    }

    void setReserved(int newReserved) {
        reserved = newReserved;
    }

private:
    int id;
    int capacity;
    int reserved;
};

int main() {
    int reserved = 0, capacity = 0;
    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();

    return 0;
}
