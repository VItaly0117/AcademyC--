#include <iostream>
using namespace std;

int main() {
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;

    cout << "Введіть дату початку (день місяць рік): ";
    cin >> startDay >> startMonth >> startYear;

    cout << "Введіть дату кінця (день місяць рік): ";
    cin >> endDay >> endMonth >> endYear;

    int daysInMonth[] = {31, 28 + (endYear % 4 == 0 && (endYear % 100 != 0 || endYear % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;


    days += daysInMonth[startMonth - 1] - startDay;

    days += endDay;

    for (int month = startMonth + 1; month < endMonth; ++month) {
        days += daysInMonth[month - 1];
    }

    for (int year = startYear + 1; year < endYear; ++year) {
        days += (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 366 : 365;
    }


    cout << "Кількість днів між датами: " << days << endl;

    return 0;
}

