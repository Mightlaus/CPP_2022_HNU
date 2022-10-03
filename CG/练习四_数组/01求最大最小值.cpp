#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1, min = 99999999;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int curNum = 0;
        cin >> curNum;
        if (curNum >= max) { max = curNum; };
        if (curNum <= min) { min = curNum; };
    }

    printf("%d %d", max, min);
}