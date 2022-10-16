#include <iostream>
#include <vector>

int total_min(int hour, int min) {
    return hour * 60 + min;
}

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;  // n:plane nums, s:minimum permitted time
//    cout << n << " " << s << endl;
    vector<int> landTime;

    for (int i = 0; i < n; ++i) {
        int hour, min;
        cin >> hour >> min;
//        cout << hour << " " << min << endl;
        landTime.push_back(total_min(hour, min));
    }

    // 第一班之前
    if (landTime[n - 1] + 1 + 1 * s > 24 * 60 && (landTime[n - 1] + 2 + 2 * s - 24 * 60 < landTime[0])) {
        int hour = (1 + landTime[n - 1] + s - 24 * 60) / 60;
        int min = (1 + landTime[n - 1] + s - 24 * 60) % 60;
        cout << hour << " " << min;
        return 0;
    }

    // 第一班与最后一班之间
    int former = landTime[0];
    for (int i = 1; i < n; ++i) {
        if (landTime[i] - former >= 2 + 2 * s) {
            int hour = (1 + former + s) / 60;
            int min = (1 + former + s) % 60;
            cout << hour << " " << min;
            return 0;
        }
        former = landTime[i];
    }

    //最后一班之后
    int hour = (1 + former + s) / 60;
    int min = (1 + former + s) % 60;
    hour = hour == 24 ? 0 : hour;
    cout << hour << " " << min;
}