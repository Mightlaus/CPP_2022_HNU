#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

long double constrain(long double num) {
    const long double PI = 3.1415926535;
    while (num < -PI || num > PI) {
        if (num > 0) {
            num -= 2 * PI;
        } else {
            num += 2* PI;
        }
    }

    return num;
}

long double factorial(int num) {
    int cnt = 1;
    for (int i = 1; i <= num; ++i) {
        cnt *= i;
    }

    return cnt;
}

int main() {
    long double x;
    long double sinX = 0, tmp = 1;

    cin >> x;

    x = constrain(x);
    int numerator = 1, sign = 1;
    while (abs(tmp) >= 0.5 * pow(10, -13)) {
        tmp = pow(x, numerator) / factorial(numerator) * sign;
        sinX += tmp;

        numerator += 2;
        sign *= -1;
    }

    printf("%.13Lf", sinX);


}