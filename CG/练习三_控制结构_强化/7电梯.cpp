#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    const int upTime = 6, downTime = 4, waitTime = 5;
    int n;
    string T;

    string str;
    getline(cin, str);
    stringstream sstring(str);

//    generate a vector containing all the floors in int
    vector<int> floors;
    while (getline(sstring, T, ' ')) {
        floors.push_back(stoi(T));
    }
    floors.erase(floors.begin());

    int curFloor = 0, timeCnt = 0;
    for (int floor: floors) {
//        up
        if (floor > curFloor) {
            timeCnt += upTime * (floor - curFloor);
            curFloor = floor;
            timeCnt += waitTime;
        } else if (floor < curFloor) {
//            down
            timeCnt += downTime * (curFloor - floor);
            curFloor = floor;
            timeCnt += waitTime;
        } else {
//            same
            timeCnt += waitTime;
        }
    }

    cout << timeCnt;
}
