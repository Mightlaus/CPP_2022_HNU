//---------------------
//    ch11_4.cpp
//---------------------
#include"tdate.h"
#include<iostream>��
using namespace std;
//---------------------
void Tdate::Set(int m,int d,int y){
  month = m;      //������monthǰ�Ӷ�����
  day = d;
  year = y;
}//--------------------
void Tdate::Print(){
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
int Tdate::IsLeapYear(){
  return(year%4==0&&year%100!=0)||(year%400==0);
}//--------------------
int main(){
  Tdate s;
  Tdate t;
  s.Set(2,15,1998);
  t.Set(3,15,1997);
  s.Print();
  t.Print();
}//--------------------
