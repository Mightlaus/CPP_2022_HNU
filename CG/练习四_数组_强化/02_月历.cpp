#include <iostream>
#include <string>

using namespace std;

int to_julian_day(int year, int month, int day) {
    if (month <= 2) {
        month += 12;
        year -= 1;
    }

    int B = year / 100;
    B = 2 - B + year / 400;

    double dd = day + 0.5;
    double JD = int(365.25 * (year + 4716) + 0.01) + int((30.6 * (month + 1))) + dd + B - 1524.5;

    return JD;
}

int days_of_this_mo(int year, int month) {
    int run = 0;
    if (!(year % 4) || !(year % 400)) {
        run = 1;
    }

    int bigMonth[] = {1, 3, 5, 7, 8, 10, 12};
    int smallMonth[] = {4, 6, 9, 11};

    for (auto bm: bigMonth) {
        if (bm == month) {
            return 31;
        }
    }

    for (auto sm: smallMonth) {
        if (sm == month) {
            return 30;
        }
    }

    if (run) {
        return 29;
    } else {
        return 28;
    }
}

int main() {
    int year, month;
    cin >> year >> month;

    int daysInMonth = days_of_this_mo(year, month);
    cout << "Sun Mon Tus Wed Thu Fri Sat" << endl;

    int firstDay = (to_julian_day(year, month, 1) - 1059862) % 7;

    // blank of head
    for (int i = 0; i < firstDay; ++i) {
        cout << "    ";
    }

    for(int today=1; today<=daysInMonth; ++today){
        printf("%3d", today);
        if((today + firstDay - 1)%7==6){
            cout << endl;
            continue;
        }
        cout << " ";
    }

}