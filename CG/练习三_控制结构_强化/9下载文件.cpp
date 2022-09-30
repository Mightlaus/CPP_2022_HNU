#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int Ti, Di; // Ti min with speed of Di

    for (int time = 0; time < n; ++time) {

        int N, K, totalFee = 0;
        bool usedUp = false;
        cin >> N >> K;  // K min free time, total N min

        for (int Ni = 0; Ni < N; ++Ni) {
            cin >> Ti >> Di;

            if (K <= Ti && !usedUp) {  // will use up in this turn
                Ti = Ti - K;
                K = 0;
                usedUp = true;
            } else if (!usedUp) {  // not use up yet
                K -= Ti;
                Ti = 0;
            }
            totalFee += Ti * Di;

        }

        cout << totalFee << endl;


    }


}