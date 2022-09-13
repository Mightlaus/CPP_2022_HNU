//---------------------
//    ch21_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
double Div(double, double );
//---------------------
int main(){
  try{
    cout<<"7.3/2.0="<<Div(7.3, 2.0)<<endl;
    cout<<"7.3/0.0="<<Div(7.3, 0.0)<<endl;
    cout<<"7.3/1.0="<<Div(7.3, 1.0)<<endl;
  }catch(double){
    cout<<"except of deviding zero.\n";
  }
  cout<<"That is ok. \n";
}//--------------------
double Div(double a, double b){
  if(b==0.0)
    throw b;
  return a/b;
}//--------------------