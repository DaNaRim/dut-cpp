//https://drive.google.com/file/d/19neYpxlEjfgYZqLzGea89-8MRo-HlphP/view?usp=share_link

#include "string"
#include "iostream"

using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {

    }

    void print() {
        cout << name << " is " << age << " years old" << endl;
    }
};

int main() {
    Person person;
    person.name = "Harry";
    person.age = 23;
    cout << "Meet " << person.name << endl;
    person.print();
    return 0;
}
