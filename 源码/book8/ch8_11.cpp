//---------------------
//    ch8_11.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void Sum(int array[], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += *array;
    array++;    //ok:array是一个指针，可以作为左值
  }
  cout<<sum<<endl;
}//--------------------
int main(){
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  Sum(a,10);
}//--------------------
