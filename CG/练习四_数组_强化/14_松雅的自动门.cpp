#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int n, m, a, d;
    cin >> n>>m>>a>>d;  // n个员工， m个客人， 第一个雇员进入时刻a, 门打开到关闭间隔d秒

    vector<int> pepTime;

    for (int i = 0; i < m; ++i) {
        int tmp; cin>>tmp;
        pepTime.push_back(tmp);
    }
    for (int i = 0; i < n; ++i) {
        pepTime.push_back((i+1)*a);
    }

    sort(pepTime.begin(), pepTime.end());

    int cnt=0;
    int curTime = 0;
    for (int i = 0; i < m + n; ++i) {
        if(pepTime[i]>curTime){
            curTime = pepTime[i]+d;
            cnt++;
        }
    }

    cout << cnt;

}