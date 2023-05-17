//https://drive.google.com/file/d/1deXmEYS7jOi36YxL3FTsPiMIxWivJMbi/view

#include "iostream"

using namespace std;

bool hasUppercaseLetter(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) {
            return true;
        }
    }
    return false;
}

bool hasLowercaseLetter(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (islower(password[i])) {
            return true;
        }
    }
    return false;
}

bool hasDigit(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) {
            return true;
        }
    }
    return false;
}

bool hasSpecialCharacter(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (!isalnum(password[i])) {
            return true;
        }
    }
    return false;
}

void clb457_1_passwordValidator() {
    string password;
    getline(std::cin, password);

    bool isValid = true;

    //check length
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long" << endl;
        isValid = false;
    }

    //check for Uppercase
    if (!hasUppercaseLetter(password)) {
        cout << "Password must contain at least one uppercase letter" << endl;
        isValid = false;
    }

    //check for lowercase
    if (!hasLowercaseLetter(password)) {
        cout << "Password must contain at least one lowercase letter" << endl;
        isValid = false;
    }

    //check for digit
    if (!hasDigit(password)) {
        cout << "Password must contain at least one digit" << endl;
        isValid = false;
    }

    //check for special character
    if (!hasSpecialCharacter(password)) {
        cout << "Password must contain at least one special character" << endl;
        isValid = false;
    }

    if (isValid) {
        cout << "Password is valid" << endl;
    }
}

int main() {
    clb457_1_passwordValidator();

    return 0;
}
