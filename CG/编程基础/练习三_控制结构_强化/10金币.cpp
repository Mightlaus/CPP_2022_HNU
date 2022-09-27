#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int curDay = 1, finalDay, total = 0, curMoney = 1;

    cin >> finalDay;
    for (int day = 1; day <= finalDay; day++) {
        total += curMoney;
        if (curDay >= curMoney) {
            curMoney++;
            curDay = 1;
        } else {
            curDay++;
        }
    }

    cout << total;

}