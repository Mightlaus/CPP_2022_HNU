#include  <iostream>
using  namespace  std;

int  main()
{
    int  n;
    cin  >>  n;
    int  a[n];
    for  (int  i  =  0;  i  <  n;  i++)
        cin  >>  a[i];

    int  target[n];
    int  count  =  0;
    for  (int  i  =  1;  i  <  n;  i  ++)  {
        if  (a[i]  <=  a[0])  {
            target[count]  =  a[i];
            count  ++;
        }
    }

    target[count++]  =  a[0];
    // begin
    for (int i = count; i < n; ++i) {
        target[i] = a[i];
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
