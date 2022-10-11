#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n, m;
    cin >> n >>m;   // n: bus lines, m: position;
    int begin[n], end[n];
//    printf("%d %d\n", n, m);

    int min=999999, max=-1;
    for (int i = 0; i < n; ++i) {
        int curBegin, curEnd;

        cin >> curBegin >> curEnd;
//        printf("%d %d\n", begin[i], end[i]);

        if(curBegin<0){
            curBegin = 0;
        }
        if(curEnd>m){
            curEnd = m;
        }

        begin[i] = curBegin;
        end[i] = curEnd;

        if(curBegin<=min) {
            min = curBegin;
        }
        if(end[i]>=max){
            max = curEnd;
        }
    }

    int gaps[max - min];
    for (auto &g:gaps) {
        g = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = begin[i]; j <= end[i]-1; ++j) {
            gaps[j] = 1;
        }
    }

    for (int i = 0; i < m-1; ++i) {
        if(!(gaps[i]) or max < m){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}