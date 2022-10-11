#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int L, v, l, r;
        cin >> L >> v >> l >> r;  //L:destination, v:gap, l:another train's len, r:stop place

        int dots[L];
        for(auto &d:dots){
            d = 0;
        }

        for (int j = 0; j < L; ++j) {
            if ((j+1)%v==0){
                dots[j] = 1;
            }
        }

        for (int k = l-1; k < r; ++k) {
            if(k<L-1)
                dots[k] = 0;
        }

        int cnt=0;
        for(auto dot:dots){
            if(dot){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}