#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * 分清行列再做题！
 * 分清行列再做题！
 * 分清行列再做题！
 */

int main() {
    int n, m; //n候选人 m城市
    cin >> n >> m;
//    cout<<n<<" "<<m<<endl;
    int votes[m][n + 1];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> votes[i][j];
//            cout << votes[i][j]<<" ";
        }
//        cout<<endl;
    }

    // 算每个城市的候选人 存在i,n中
    for (int i = 0; i < m; ++i) {
        int imax = 0;
        for (int j = 0; j < n; ++j) {
            if (votes[i][j] > imax) {
                imax = votes[i][j];
                votes[i][n] = j + 1;
            }
        }
    }

    //算城市数
    vector<int> cnt(101, 0);
    for (int i = 0; i < m; ++i) {
        int people = votes[i][n];
        cnt[people] += 1;
    }

    int maxidx = 0;
    for (int i = 0; i < 101; ++i) {
        if (cnt[i] > cnt[maxidx]) {
            maxidx = i;
        }
    }

    cout << maxidx;


}