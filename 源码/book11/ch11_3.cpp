//*********************
// ch11_3.prj
//*********************
ch11_3.cpp
tdate.cpp
//*********************

//---------------------
//    ch11_3.cpp
//---------------------
#include"tdate.h"
#include<iostream>��
using namespace std;
//---------------------
void someFunc(Tdate& refs){
  refs.Print();    //refs��s����ı���
  if(refs.IsLeapYear())
    cout<<"oh oh\n";
  else
    cout<<"right\n";
}//--------------------
int main(){
  Tdate s;
  s.Set(2,15,1998);
  someFunc(s);    //����ĵ�ַ��������
}//--------------------
