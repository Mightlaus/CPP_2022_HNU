#include  <iostream>
using  namespace  std;

int  main()
{
    int  n,i,j,max,maxi;
    cin>>n;
    int  arr[n];
    for(i  =  0;i  <  n;i++){
        cin>>arr[i];
    }
    for(j  =  0;j  <  n-1;  j++){
        max  =  arr[j];
        maxi  =  j;
        // begin
        for (int k = j+1; k < n; ++k) {
            if(arr[k]>max){
                max = arr[k];
                maxi = k;
            }
        }
        // end
        arr[maxi]  =  arr[j];
        arr[j]  =  max;
    }
    for(i  =  0;i  <  n-1;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<arr[n-1];
    return  0;
}