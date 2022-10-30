#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool run(int year){
    if(!(year%4)and year%100){
        return true;
    } else if(!(year%400)){
        return true;
    }

    return false;
}

int dayofmon(int year, int month){
    static vector<int> big({1, 3, 5, 7, 8, 10, 12});
    static vector<int> small({4, 6, 9, 11});

    if(count(big.begin(), big.end(), month)){
        return 31;
    } else if(count(small.begin(), small.end(), month)){
        return 30;
    } else if(run(year)){
        return 29;
    } else {
        return 28;
    }
}



int main()
{
    int y,m,d;
    char r;
    cin>>y>>r>>m>>r>>d;

    int dayscnt=0;
    do{
        int curYear, curMon;
        if(dayofmon(y,m)>=d)
            dayscnt += dayofmon(y,m)-d;
        else
            dayscnt+=0;

        for(int i=1; i<=11; ++i){
            curMon=(m+i)%12;
            if(curMon==0){
                curMon=12;
            }
            curYear = y+(m+i-1)/12;
            dayscnt+=dayofmon(curYear, curMon);
        }
        y++;

        if(dayofmon(y,m)>=d)
            dayscnt+=d;
        else
            dayscnt+=dayofmon(y,m);


    } while(dayscnt%7!=0 or dayofmon(y,m)<d);

    cout << y;
}
