//---------------------
//    ch12_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Desk{
public:
  Desk();        //构造函数声明
private:
  int weight, high, width, length;
};//-------------------
class Stool{
public:
  Stool();       //构造函数声明
private:
  int weight, high, width, length;
};//-------------------
Desk::Desk(){    //构造函数定义
  weight=10; high=5; width=5; length=5;
  cout<<weight<<" "<<high<<" "<<width<<" "<<length<<endl;}//--------------------
Stool::Stool(){  //构造函数定义
  weight=6; high=3; width=3; length=3;
  cout<<weight<<" "<<high<<" "<<width<<" "<<length<<endl;}//--------------------
void fn(){
  Desk da;    //自动调用Desk()
  Stool sa;   //自动调用Stool()
}//--------------------
int main(){
  fn();
}//--------------------
