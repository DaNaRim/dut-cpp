//https://dn.dut.edu.ua/mod/resource/view.php?id=22969
//https://dn.dut.edu.ua/mod/resource/view.php?id=23240

#include "iostream"

using namespace std;

bool isLeap(int year) {
    if (year % 4 != 0) {
        return false;
    }
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    return true;
}

int monthLength(int year, int month) {
//    if (month == 2) {
//        if (isLeap(year)) {
//            return 29;
//        }
//        return 28;
//    }
//    if (month == 4 || month == 6 || month == 9 || month == 11) {
//        return 30;
//    }
//    return 31;

    switch (month) {
        case 2:
            return isLeap(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

void pz19_1_leapYears() {
    for (int year = 1995; year < 2017; year++) {
        cout << "Year " << year << " is ";
        if (!isLeap(year)) {
            cout << "not ";
        }
        cout << "leap" << endl;
    }
}

void pz19_2_monthLength() {
    for (int year = 2000; year < 2002; year++) {
        for (int mo = 1; mo <= 12; mo++) {
            cout << monthLength(year, mo) << " ";
        }
        cout << endl;
    }
}

struct Date {
    int year;
    int month;
    int day;
};

Date getCurrentDate() {
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);
    return {1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday};
}

Date getMyBirthdayDate() {
    return {2003, 10, 12};
}

void pz19_3_countDaysFromMyBirthday() {
    Date myB = getMyBirthdayDate();
    Date currDate = getCurrentDate();

    int days = 0;
    for (int year = myB.year; year < currDate.year; year++) {
        days += isLeap(year) ? 366 : 365;
    }

    for (int mo = 1; mo < myB.month; mo++) {
        days -= monthLength(myB.year, mo);
    }
    days -= myB.day;

    for (int mo = 1; mo < currDate.month; mo++) {
        days += monthLength(currDate.year, mo);
    }
    days += currDate.day;

    cout << "Days from my birthday: " << days << endl;
}

int main() {
    pz19_3_countDaysFromMyBirthday();

    return 0;
}
