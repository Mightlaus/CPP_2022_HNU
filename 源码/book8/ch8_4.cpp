//---------------------
//    ch8_4.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  int iArray[10];
  int sum=0;
  int* iPtr=iArray;        //用数组名iArray给指针初始化

  for(int i=0; i<10; i++)  //给数组赋值
    iArray[i]=i*2;
  for(int idx=0; idx<10; idx++){  //累计数组元素
    sum+= *iPtr;
    iPtr++;
  }
  cout<<"sum is "<<sum<<endl;
}//--------------------
