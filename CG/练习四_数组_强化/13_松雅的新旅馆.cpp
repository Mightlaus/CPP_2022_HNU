#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

    // process data
    int n, t;
    cin >> n >> t;  // already n buildings; newBd with t width;
    map<int, int> oldBd;

    int newBdCnt = 2;

    int maxLoc = -20001, minLoc = 20001;
    for (int i = 0; i < n; ++i) {
        int loc, width;
        cin >> loc >> width;

        if (maxLoc < loc) {
            maxLoc = loc;
        }
        if (minLoc > loc) {
            minLoc = loc;
        }

        oldBd.insert(pair<int, int>(loc, width));
    }


    for (int curLoc = minLoc + oldBd[minLoc] / 2; curLoc <= maxLoc - oldBd[maxLoc] / 2; ++curLoc) {
        int curLeft = curLoc - t / 2;
        int curRight = curLoc + t / 2;


        // check if newBd is next to the old
        bool nextTo = false;
        for (map<int, int>::iterator it = oldBd.begin(); it != oldBd.end(); it++) {
            if (curLeft == it->first + it->second / 2 || curLeft == it->first - it->second / 2 ||
                curRight - t / 2 == it->first + it->second / 2 || curRight + t / 2 == it->first - it->second / 2) {
                nextTo = true;
                break;
            }

        }
        if (!nextTo) continue;

        // check if overlap
        bool overLap = false;
        for (map<int, int>::iterator it = oldBd.begin(); it != oldBd.end(); it++) {
            if (it->first < curLoc) {
                if (it->first + it->second / 2 > curLeft) {
                    overLap = true;
                    break;
                }
            } else if (it->first > curLoc) {
                if (it->first - it->second / 2 < curRight) {
                    overLap = true;
                    break;
                }
            }
        }
        if (overLap) continue;

        newBdCnt += 1;

    }

    cout << newBdCnt;


}