#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string toBin(int num) {
    string num2Str;

    while (num != 0) {
        num2Str = ((char) (num % 2 + '0')) + num2Str;
        num /= 2;
    }

    return num2Str;
}

void addZero(string &num1, string &num2){
    int difSize = 0;
    if (num1.size() > num2.size()) {
        difSize = num1.size() - num2.size();
        for (int i = 0; i < difSize; ++i) {
            num2 = '0' + num2;
        }
    } else {
        difSize = num2.size() - num1.size();
        for (int i = 0; i < difSize; ++i) {
            num1 = '0' + num1;
        }
    }
}


int main() {
    int x = 1, y = 4;
    cin >> x >> y;
    string xStr = toBin(x);
    string yStr = toBin(y);

    addZero(xStr, yStr);


    int difCnt = 0;
    for (int idx=0; idx < xStr.size(); ++idx) {
        if (xStr[idx] != yStr[idx]) {
            difCnt++;
        }
    }

    cout << difCnt;
}