#include <iostream>

using namespace std;

int main() {
    cout << "Enter today's date(day, month, year): ";
    int currentDay, currentMonth, currentYear;
    cin >> currentDay >> currentMonth >> currentYear;
    cout << "Enter your birth date(day, month, year): ";
    int birthDay, birthMonth, birthYear;
    cin >> birthDay >> birthMonth >> birthYear;

    int todayYear = currentYear - birthYear;
    int todayDay = 365 * todayYear;

    int leap = 0;
//    This loop calculates the leap years which came in your life
    for (; birthYear <= currentYear; birthYear++) {
        if (birthYear % 4 == 0)
            leap++;
        todayDay += leap;
    }
    cout << "Your number of days from birth to current date are: "
         << todayDay <<" days" << endl;

    return 0;
}