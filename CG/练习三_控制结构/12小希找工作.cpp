#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int wageA, distA, wageB, distB, wageC, distC;
    char breakA, breakB, breakC;

    cin >> wageA >> breakA >> distA;
    cin >> wageB >> breakB >> distB;
    cin >> wageC >> breakC >> distC;

    int totalA = 0, totalB = 0, totalC = 0;
    totalA += wageA * 100 / 5000;
    totalA += breakA == 'y' ? 20 : 0;
    if (distA <= 2000) {
        totalA += 100;
    } else {
        int remain = 100;
        remain -= ceil((double) distA / (double) 200) * 10;
        totalA += remain >= 0 ? remain : 0;
    }


    totalB += wageB * 100 / 5000;
    totalB += breakB == 'y' ? 20 : 0;
    if (distB <= 2000) {
        totalB += 100;
    } else {
        int remain = 100;
        remain -= ceil((double) distB / (double) 200) * 10;
        totalB += remain >= 0 ? remain : 0;
    }

    totalC += wageC * 100 / 5000;
    totalC += breakC == 'y' ? 20 : 0;
    if (distC <= 2000) {
        totalC += 100;
    } else {
        int remain = 100;
        remain -= ceil((double) distC / (double) 200) * 10;
        totalC += remain >= 0 ? remain : 0;
    }

    if (totalA > totalB && totalA > totalC) cout << "A";
    if (totalB > totalA && totalB > totalC) cout << "B";
    if (totalC > totalA && totalC > totalB) cout << "C";
}
