//---------------------
//    ch8_24.cpp
//---------------------
#include<iostream>
#include<cmath>   //用到sin(),cos()
using namespace std;
//---------------------
double sigma(double(*func)(double), double dl, double du){
  double dt=0.0;
  for(double d=dl; d<du; d+=0.1)
    dt += func(d);     //用函数指针调用函数
  return dt;
}//--------------------
int main(){
  double dsum;
  dsum=sigma(sin, 0.1, 1.0);    //sin函数为实参赋给函数指针func
  cout<<"the sum of sin from 0.1 to 1.0 is "<<dsum<<endl;
  dsum=sigma(cos, 0.5, 3.0);    //cos函数赋给函数指针func
  cout<<"the sum of cos from 0.5 to 3.0 is "<<dsum<<endl;
}//--------------------
