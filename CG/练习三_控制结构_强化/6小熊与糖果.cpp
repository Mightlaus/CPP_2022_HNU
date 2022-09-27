#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<string> winner;
    int liLim, boLim, T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        cin >> liLim >> boLim;

        int curSugarNum = 0;
        while (1) {
            if (++curSugarNum > liLim) {
                winner.emplace_back("Bob");
                break;
            } else {
                liLim -= curSugarNum;
            }

            if (++curSugarNum > boLim) {
                winner.emplace_back("Limak");
                break;
            } else {
                boLim -= curSugarNum;
            }
        }
    }

    for (string win: winner) {
        cout << win << "\n";
    }
}
