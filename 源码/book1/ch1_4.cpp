//---------------------
//    ch1_4.cpp
//---------------------
#include<iostream>
#include<cmath>
using namespace std;
//---------------------
double max(double x,double y){  //既是函数定义又是函数声明
  if(x>y)
    return x;
  else
    return y;
}//--------------------
int main(){
  double a,b,c;
  cout<<"input two numbers:\n";
  cin>>a>>b;
  c = max(a,b);
  cout<<"the squart of maximum ="<<sqrt(c);
}//--------------------
 