#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int A, B, precision;
    cin >> A >> B >> precision;

    string outcome;

    int curPrecision = 0;

    int res, itg;
    itg = A / B;
    res = A % B;

//    calculate integer part
    if (itg == 0) {  // precision=0
        outcome += "0.";
    } else if (itg > 0) {  // precision <= -1
        outcome += to_string(itg);
        outcome += ".";
    }

//    calculate decimal part
    while (curPrecision < precision) {
        // precision >= 1
        curPrecision ++;
        res *= 10;

//        handle 0
        while(!(res / B) && curPrecision<precision){
            res *= 10;
            curPrecision ++;
            outcome += '0';
        }

        outcome += to_string(res / B);
        res = res % B;
    }


//    printf("\nprecision:%d, \n%s", curPrecision, outcome.c_str());
    cout << outcome;
}