#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int x, m, stepCnt = 0;

    cin >> x >> m;  // x is where elep lives, m is the step
    printf("x:%d, m:%d", x, m);
    x = abs(x);


    int curStep = 2 * m - 1;
    while (1) {
        if (x / curStep) {
            stepCnt++;  // add a step of curStep
            x -= curStep;
        } else if (curStep != 1) {
            curStep -= 2;
        } else {
            cout << stepCnt;
            break;
        }
    }

}