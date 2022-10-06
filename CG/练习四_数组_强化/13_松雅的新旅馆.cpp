#include <iostream>
#include <map>
#include <vector>

using namespace std;

void pair_switch_ascend(pair<int, int> &bd1, pair<int, int> &bd2);

int main() {
    // data process
    int n, t;
    cin >> n >> t;  // already n buildings; newBd with t width;
    vector<pair<int, int>> oldBds;

    for (int i = 0; i < n; ++i) {
        int loc, width;
        cin >> loc >> width;
        oldBds.push_back(pair<int, int>(loc, width));
    }

    // bubble ascending sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            pair_switch_ascend(oldBds[i], oldBds[j]);
        }
    }

    // judge place
    int newBdCnt = 2;
    for (int gapIdx = 1; gapIdx <= n - 1; ++gapIdx) {
        double gapLeftEdge = oldBds[gapIdx - 1].first + (double) oldBds[gapIdx - 1].second / 2;
        double gapRightEdge = oldBds[gapIdx].first - (double) oldBds[gapIdx].second / 2;

        if (gapRightEdge - gapLeftEdge >= t) {
            if (gapRightEdge - gapLeftEdge == t) {  // just enough to hold one
                newBdCnt++;
            } else {  // enough to hold on both sides
                newBdCnt += 2;
            }
        }
    }

    cout << newBdCnt << endl;
}

void pair_switch_ascend(pair<int, int> &bd1, pair<int, int> &bd2) {
    // ascending(bd2.loc > bd1.loc)
    pair<int, int> tmp;
    if (bd1.first > bd2.first) {
        tmp = bd2;
        bd2 = bd1;
        bd1 = tmp;
    }
}