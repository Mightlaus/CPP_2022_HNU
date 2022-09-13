//---------------------
//    ch8_7.cpp
//---------------------
#include<iostream>
#include<cstdlib>   // 用到mllaoc()
using namespace std;
//---------------------
int main(){
  cout<<"please input a number of array:\n";
  int aSize;    //元素个数
  cin>>aSize;

  int *ap = (int*)malloc(aSize*sizeof(int)); //堆内存分配

  for(int cnt=0; cnt<aSize; cnt++)
    ap[cnt]=cnt*2;
  for(int cnt=0; cnt<aSize; cnt++)
    cout<<ap[cnt]<<"    ";

  cout<<endl;
}//--------------------
