//---------------------
//    ch7_3.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  static int a[]={1,2,4,8,16};
  for(int i=0; i<(sizeof(a)/sizeof(int)); i++)
    cout<<a[i]<<" ";
  cout<<endl;
}//--------------------