#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;

    int begins[n], ends[n];
    int min=9999999, max=-1;

    for (int i = 0; i < n; ++i) {
        int tmpBegin = 0, tmpEnd=0;
        cin >> tmpBegin >> tmpEnd;

        if(tmpBegin<min){
            min = tmpBegin;
        }
        if(tmpEnd>max){
            max = tmpEnd;
        }

        begins[i] = tmpBegin;
        ends[i] = tmpEnd;
    }


    int coverTime[n];
    for (int i = 0; i < n; ++i) {
        coverTime[i]=0;
    }

    for(int curNum=min; curNum <=max; ++curNum){
        int curNumTime = 0;
        for (int i = 0; i < n; ++i) {
            if(curNum>=begins[i] && curNum<=ends[i]){
                curNumTime++;
            }
        }

        coverTime[curNumTime-1]++;
    }


    for(int time : coverTime){
        cout << time << ' ';
    }

}