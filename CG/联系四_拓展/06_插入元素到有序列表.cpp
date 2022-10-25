#include  <iostream>
using  namespace  std;
/*
 * 输入一个整数数组，数组本身有序（从大到小），
 * 再输入一个整数i，将i插入到整数数组中，保持有序（从大到小），再输出。
 */
int  main()
{
    int  n,x,i,j;
    cin>>n;
    int  arr[n+1];
    cin>>x;
    for(i  =  0;i  <  n;i++){
        cin>>arr[i];
    }
    for(i  =  0;i  <  n;  i++){
        if(arr[i]  <  x)
            break;
    }
    // begin
    for (j=n; j>i; j--){
        swap(arr[j], arr[j-1]);
    }
    // end
    arr[i]  =  x;
    for(i  =  0;i  <  n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<arr[i];
    return  0;
}