#include <iostream>

using namespace std;

int waitTime(int timeNow, int g, int r);

int main() {
    int n, g, r;
    cin >> n >> g >> r;

    int consumeTime[n + 1];
    for (int i = 0; i <= n; ++i) {
        cin >> consumeTime[i];
    }

    int busNum;
    cin >> busNum;

    int leaveTime[busNum];
    for (int i = 0; i < busNum; ++i) {
        cin >> leaveTime[i];
    }

    for (int curBus = 0; curBus < busNum; ++curBus) {
        int timeCnt = 0;
        timeCnt += leaveTime[curBus];
        for (int cross = 0; cross < n; ++cross) {
            timeCnt += consumeTime[cross];
            timeCnt += waitTime(timeCnt, g, r);
        }

        timeCnt += consumeTime[n];
        cout << timeCnt << " ";
    }

}

int waitTime(int timeNow, int g, int r) {
    if (timeNow % (g + r) < g) {
        return 0;
    } else {
        int wait = timeNow % (g + r) - g ? r + g - timeNow % (g + r) : r;
        return wait;
    }
}