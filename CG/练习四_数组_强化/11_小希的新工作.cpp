#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n, L, a;
    cin >> n >> L >> a; // work L mins, n customers, relax a mins;

    int arvTime[n], servTime[n];

    for (int i = 0; i < n; ++i) {
        cin >> arvTime[i] >> servTime[i];
    }

    int curTime = 0;
    int relaxCnt = 0;
    int custm = 0;

    while(custm<=n-1 && curTime<=L){
        if(arvTime[custm] - curTime >= a){
            int times = (arvTime[custm] - curTime) / a;
            relaxCnt += times;
            curTime = arvTime[custm] + servTime[custm];
        } else {
            curTime = arvTime[custm] + servTime[custm];
        }

        custm++;
    }

    if(curTime<=L){
        relaxCnt += (L-curTime) / a;
    }

    cout << relaxCnt;
}