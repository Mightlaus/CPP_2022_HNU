//---------------------
//    ch12_13.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  int m=5;
  if(m==5)
    goto abc;

  int n;
abc:
  cout<<"m="<<m<<",n="<<n<<endl;   //n已有定义}//--------------------