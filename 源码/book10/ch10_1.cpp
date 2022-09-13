//---------------------
//    ch10_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Weather{
  double temp;    //温度
  double wind;    //风力
};//-------------------
int main(){
  Weather today;
  today.temp=30.5;    //作为左值使用
  today.wind=10.1;

  cout<<"Temp="<<today.temp<<endl;  //作为右值使用
  cout<<"Wind="<<today.wind<<endl;
}//--------------------
