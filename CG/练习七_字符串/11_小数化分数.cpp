#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

/*
 * 算公因数必须用高级算法，穷举速度太慢
 */

int gcd(ll num1, ll num2) {
    if (num1 > num2) {
        swap(num1, num2);
    }

    for (ll i = num1; i >= 1; --i) {
        if (num2 % i == 0 and num1 % i == 0) {
            return i;
        }
    }
}

int gcd_fast(ll num1, ll num2) {
    if (num1 > num2) {
        swap(num1, num2);
    }

    if (!num1 or !num2) {
        return 1;
    } else if (num2 % num1 == 0) {
        return num1;
    }

    return gcd_fast(num1, num2 % num1);
}

void pass(ll numr1, ll deno1, ll numr2, ll deno2, ll &numrRlt, ll &denoRlt) {
    denoRlt = deno1 * deno2;
    numrRlt = numr1 * deno2 + numr2 * deno1;

    auto maxFactor = gcd_fast(denoRlt, numrRlt);
    denoRlt /= maxFactor;
    numrRlt /= maxFactor;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {

        string str;
        cin >> str;


        // 重构非循环部分
        auto dotPlc = str.find('.');
        int limLen = 0;
        string limNum = "0";
        ll limNumr, limDeno;
        for (int i = dotPlc + 1; i < str.size(); ++i) {
            if (str[i] > '9' or str[i] < '0') {
                break;
            }

            limNum += str[i] ;
            limLen++;
        }
        limNumr = stoi(limNum);
        limDeno = pow(10, limLen);


        // 循环部分
        ll loopNumr = 0, loopDeno = 1;
        auto lSqPlc = str.find('(');
        if (lSqPlc != -1) {
            auto loopHead = str.find('(') + 1;
            auto loopTail = str.find(')');
            auto loopPart = str.substr(loopHead, loopHead - loopTail - 1);
            loopDeno = (pow(10, loopPart.size() - 1) - 1) * pow(10, limLen);
            loopNumr = stoi(loopPart);
        }

        ll rltNumr, rltDeno;
        pass(limNumr, limDeno, loopNumr, loopDeno, rltNumr, rltDeno);
        printf("%d/%d\n", rltNumr, rltDeno);
    }


}
