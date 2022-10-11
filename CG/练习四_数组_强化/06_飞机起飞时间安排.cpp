#include <iostream>
#include <vector>

int total_min(int hour, int min) {
    return hour * 60 + min;
}

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;  // n:plane nums, s:minimum permitted time
    vector<int> landTime;

    for (int i = 0; i < n; ++i) {
        int hour, min;
        cin >> hour >> min;
        landTime.push_back(total_min(hour, min));
    }

    int former = -1;
    for (int i = 0; i < n; ++i) {
        if (landTime[i] - former >= 2 + 2 * s) {
            int hour = (1 + former + s) / 60;
            int min = (1 + former + s) % 60;
            cout << hour << " " << min;
            return 0;
        }

        former = landTime[i];
    }

    int hour = (1 + landTime[n - 1]) / 60;
    int min = (1 + landTime[n - 1]) % 60;
    cout << hour << " " << min;
}