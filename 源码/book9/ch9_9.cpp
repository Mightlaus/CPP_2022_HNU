//---------------------
//    ch9_9.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
double* fn(const double* pd){
  static double ad=32;
  ad+=*pd;
  cout<<"fn being called...the value is: "<<*pd<<endl;
  return &ad;
}//--------------------
int main(){
  double a=345.6;
  const double* pa=fn(&a);
  cout<<*pa<<endl;
  a=55.5;
  pa = fn(&a);
  cout<<*pa<<endl;
}//--------------------
