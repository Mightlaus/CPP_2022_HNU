//---------------------
//    ch19_4.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void fn(float interest, float amount){
  cout<<"RMB amount = ";
  cout.precision(2);        //置有效位数为2位
  cout<<amount;
  cout<<"\nthe interest = ";
  cout.precision(4);        //置有效位数为4位
  cout<<interest<<endl;
}//--------------------
int main(){
  float f1 =29.41560067;
  float f2 =12.567188;
  fn(f1,f2);
}//--------------------