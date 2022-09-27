#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class ClockTime {
public:
    int hour;
    int minute;
};

bool is_lucky(ClockTime obj) {
    if (obj.minute%10==7 || obj.hour%10==7)
        return true;
    else
        return false;
}

void minus_time(ClockTime &obj, int minus_time){
    if(obj.minute<minus_time){
        if(obj.hour==0){
            obj.hour = 23;
            obj.minute = 60 + obj.minute - minus_time;
        } else {
            obj.hour = obj.hour - 1;
            obj.minute = 60 + obj.minute - minus_time;
        }
    } else {
        obj.minute = obj.minute - minus_time;
    }
}

int main() {
    int x, hh, mm;  // x: delay time; hh: hour; mm: minute
    cin >> x;
    cin >> hh >> mm;
    ClockTime cTime;
    cTime.hour = hh;
    cTime.minute = mm;

    int cnt = 0;
    while(1){
        if(!is_lucky(cTime)){
            cnt++;
            minus_time(cTime, x);
        } else {
            cout << cnt;
            break;
        }
    }
}