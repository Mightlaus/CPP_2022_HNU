//---------------------
//    tdate.cpp  类实现--成员函数定义
//---------------------
#include"tdate.h"
#include<iostream>
using namespace std;
//---------------------
void Tdate::Set(int m,int d,int y){
  month=m;  day=d;  year=y;
}//--------------------
int Tdate::IsLeapYear(){
  return (year%4==0&&year%100!=0)||(year%400==0);
}//--------------------
void Tdate::Print(){
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
