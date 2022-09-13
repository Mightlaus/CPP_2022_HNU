//---------------------
//    ch5_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void func();
void print(int a, int b, int n);
int n=1;    //全局变量
//---------------------
int main(){
  static int a;    // 静态局部变量
  int b = -10;     // 局部变量
  print(a,b,n);
  b+=4;
  func();
  print(a,b,n);
  n+=10;
  func();
}//--------------------
void func(){
  static int a=2;    // 静态局部变量
  int b=5;           // 局部变量
  a+=2;
  n+=12;
  b+=5;
  print(a,b,n);
}//--------------------
void print(int a, int b, int n){
  cout<<"a:"<<a
      <<"  b:"<<b
      <<"  n:"<<n<<endl;
}//--------------------
