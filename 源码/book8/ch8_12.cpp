//---------------------
//    ch8_12.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void swap(int,int);
//---------------------
int main(){
  int a=3, b=8;
  cout<<"a="<<a<<", b="<<b<<endl;
  swap(a,b);
  cout<<"after swapping...\n";
  cout<<"a="<<a<<", b="<<b<<endl;
}//--------------------
void swap(int x,int y){  //交换两个形参
  int temp=x;    
  x=y;
  y=temp;
}//--------------------
