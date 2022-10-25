#include  <iostream>
using  namespace  std;
/*
 *  把a[iBegin]到a[iEnd]（含）范围内的元素
 *  以a[iBegin]为界，把小于或等于a[iBegin]的元素排在数组下标较低位置，
 *  大于a[iBegin]的元素排在下标较高位置，第a[iBegin]则再两元素的中间。
 */

int  main()
{
    int  n;
    cin  >>  n;
    int  a[n];
    int  iBegin,  iEnd;
    cin  >>  iBegin  >>  iEnd;
    for  (int  i  =  0;  i  <  n;  i++)
        cin  >>  a[i];

    int  target[n];
    for  (int  i  =  0;  i  <  n;  i  ++)  {
        target[i]  =  a[i];
    }

    int  count  =  0;
    for  (int  i  =  iBegin+1;  i  <  n  &&  i<=iEnd;  i  ++)  {
        if  (a[i]  <=  a[iBegin])  {
            target[iBegin+count]  =  a[i];
            count  ++;
        }
    }

    target[iBegin+count]  =  a[iBegin];
    count  ++;
    // begin
    for (int i = iBegin; i <= iEnd; ++i) {
        if(a[i]>a[iBegin]){
            target[iBegin+count++] = a[i];
        }
    }
    // end
    for  (int  i  =  0;  i  <  n;  i  ++)  {
        if  (i  ==  0)  {
            cout  <<  target[i];
        }  else  {
            cout  <<  "  "  <<  target[i];
        }
    }
}