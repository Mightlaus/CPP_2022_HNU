//---------------------
//    ch12_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Desk{
public:
  Desk();        //���캯������
private:
  int weight, high, width, length;
};//-------------------
class Stool{
public:
  Stool();       //���캯������
private:
  int weight, high, width, length;
};//-------------------
Desk::Desk(){    //���캯������
  weight=10; high=5; width=5; length=5;
  cout<<weight<<" "<<high<<" "<<width<<" "<<length<<endl;}//--------------------
Stool::Stool(){  //���캯������
  weight=6; high=3; width=3; length=3;
  cout<<weight<<" "<<high<<" "<<width<<" "<<length<<endl;}//--------------------
void fn(){
  Desk da;    //�Զ�����Desk()
  Stool sa;   //�Զ�����Stool()
}//--------------------
int main(){
  fn();
}//--------------------
