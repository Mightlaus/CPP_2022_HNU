//---------------------
//    ch8_14.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int* getInt(char* str){    //指针函数
  int value=20;
  cout<<str<<endl;
  return &value;    //warning: 将局部变量的地址返回是不妥的
}//--------------------
void somefn(char* str){
  int a=40;
  cout<<str<<endl;
}//--------------------
int main(){
  int* pr=getInt("input a value:");    //赋值取自返回的指针值
  cout<<*pr<<endl;            //第一次输出*pr
  somefn("It is uncertain.");
  cout<<*pr<<endl;            //第二次输出*pr
}//--------------------
