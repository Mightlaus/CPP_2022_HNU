#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    const int rest=1;
    int depth, speed, slide;

    vector<int> time;
    do{
        int curTime=0;
        int curLoc=0;
        cin >> depth >> speed >> slide;

        while(curLoc<=depth){
            curLoc += speed;
            curTime++;
            if(curLoc>=depth){
                time.push_back(curTime);
                break;
            }

            curTime += rest;
            curLoc -= slide;
        }
    } while(depth || speed || slide);


    for(int ix : time){
        cout << time[ix] << "\n";
    }
}
