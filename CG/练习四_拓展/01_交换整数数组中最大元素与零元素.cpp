#include  <iostream>
using  namespace  std;

int  main()
{
    int  n,i,max,maxi;
    cin>>n;
    int  arr[n];
    for(i  =  0;i  <  n;i++){
        cin>>arr[i];
    }
    max  =  arr[0];
    maxi  =  0;

    for (int j = 0; j < n; ++j) {
        if(arr[j]>max){
            max = arr[j];
            maxi = j;
        }
    }

    arr[maxi]  =  arr[0];
    arr[0]  =  max;
    for(i  =  0;i  <  n-1;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<arr[n-1];
    return  0;
}
