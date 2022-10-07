#include <iostream>

using namespace std;

bool finished(int irrigate[], int size){
    for (int i = 0; i < size; ++i) {
        if(irrigate[i]==0){
            return false;
        }
    }
    return true;
}

void irrigateNow(int irrigate[], int size, int place, int time){
    int begin, end;
    if(place-time+1<=0){
        begin = 0;
    } else {
        begin = place - time + 1;
    }
    if(place+time-1>=size-1){
        end = size-1;
    } else {
        end = place + time - 1;
    }

    for(int thisPlace=begin; thisPlace<=end; thisPlace++){
        irrigate[thisPlace] = 1;
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int n, k;
        cin >> n >> k;

        int irrigate[n];
        for(auto &irr:irrigate){
            irr = 0;
        }

        int place[k];
        for (int j = 0; j < k; ++j) {
            cin >> place[j];
        }

        int timeCnt=0;
        while(!finished(irrigate, n)){
            timeCnt++;
            for (int j = 0; j < k; ++j) {
                irrigateNow(irrigate, n, place[j]-1, timeCnt);
            }
        }

        cout << timeCnt  << endl;
    }
}
