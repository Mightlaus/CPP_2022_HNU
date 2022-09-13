//---------------------
//    ch8_17.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  char buffer[10]="ABC ";
  char* pc;
  pc="hello";   //ok: 将字符串常量的首地址赋给指针
  cout<<pc<<endl;
  pc++;
  cout<<pc<<endl;
  cout<<*pc<<endl;
  pc=buffer;
  cout<<pc<<endl;
}//--------------------
