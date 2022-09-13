//---------------------
//    ch9_6.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
float temp;
//---------------------
float fn1(float r){
  temp = r*r*3.14;
  return temp;
}//--------------------
float& fn2(float r){
  temp = r*r*3.14;
  return temp;
}//--------------------
int main(){
  float a=fn1(5.0);      //1
  float& b=fn1(5.0);     //2:warning
  float c=fn2(5.0);      //3
  float& d=fn2(5.0);     //4
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
}//--------------------