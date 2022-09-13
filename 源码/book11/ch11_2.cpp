//*********************
// ch11_2.prj
//*********************
ch11_2.cpp
tdate.cpp
//*********************

//---------------------
//    ch11_2.cpp
//---------------------
#include"tdate.h"
#include<iostream>
using namespace std;
//---------------------
void someFunc(Tdate* pS){
  pS->Print();  //pS是s对象的指针
  if(pS->IsLeapYear())
    cout<<"oh oh\n";
  else
    cout<<"right\n";
}//--------------------
int main(){
  Tdate s;
  s.Set(2,15,1998);
  someFunc(&s);    //对象的地址传给指针
}//--------------------
