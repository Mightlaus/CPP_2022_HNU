//---------------------
//    ch5_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int func1();
int func2();
//---------------------
int main(){
  func1();
  cout<<func2()<<endl;
}//--------------------
int func1(){
  int n=12345;
  return n;
}//--------------------
int func2(){
  int m;
  return m;    //警告:m可能没赋值就使用了
}//--------------------