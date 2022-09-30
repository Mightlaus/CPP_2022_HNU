#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>
#define LL long long

// copy from https://blog.csdn.net/hurmishine/article/details/77161865

using namespace std;

int year,month,day;

bool isLeap(int x)
{
    if((x%4==0&&x%100!=0)||x%400==0)
        return true;
    return false;
}

int cal(int y,int m,int d)
{
    if(m<3)
    {
        m+=12;
        --y;
    }
    int W=(d+1+2*m+3*(m+1)/5+y+(y>>2)-y/100+y/400)%7;
    return W==0?7:W;
}

bool judge(int x)
{
    //起始年是闰年，但是今年不是
    if(isLeap(year)&&!isLeap(x)&&(month==2&&day==29))
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d-%d-%d",&year,&month,&day);
        int pos=cal(year,month,day);
        int kk;
        for(int i=year+1;; ++i)
        {
            kk=cal(i,month,day);
            if(judge(i)) continue;
            if(kk==pos)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}