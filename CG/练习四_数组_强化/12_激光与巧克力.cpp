#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // test groups

    for (int i = 0; i < t; ++i) {
        int n, m, x1, y1, x2, y2;
        // n rows, m columns, (x1, y1), (x2, y2)
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;

        int upMax = min(x1 - 1, x2 - 1);
        int downMax = min(n - x1, n - x2);
        int leftMax = min(y1 - 1, y2 - 1);
        int rightMax = min(m - y1, m - y2);

        int covered[n][m];  // covered, n rows, n columns;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                covered[j][k] = 0;
            }
        }

        // process covered fields of the first hand
        for (int x1Move = x1 - upMax; x1Move <= x1 + downMax; ++x1Move) {
            for (int y1Move = y1 - leftMax; y1Move <= y1 + rightMax; ++y1Move) {
                covered[x1Move - 1][y1Move - 1] = 1;
            }
        }

        // process covered fields of the first hand
        for (int x2Move = x2 - upMax; x2Move <= x2 + downMax; ++x2Move) {
            for (int y2Move = y2 - leftMax; y2Move <= y2 + rightMax; ++y2Move) {
                covered[x2Move - 1][y2Move - 1] = 1;
            }
        }

        // generally count
        int unCovCnt = 0;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (!covered[j][k]) {
                    unCovCnt += 1;
                }
            }
        }

        cout << unCovCnt << endl;
    }
}