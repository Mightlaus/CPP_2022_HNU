//---------------------
// checking.cpp
//---------------------
#include"checkingm.h"
#include"account.h"
#include<iostream>
using namespace std;
//---------------------
Checking::Checking(unsigned acntNo, float balan)  //基类初始化完成链表操作
  : Account(acntNo, balan), remittance(other){}
//---------------------
void Checking::Withdrawal(float amount){
  float tmp = amount;
  if(remittance==remitByPost)    //信汇加收30元手续费
    tmp = amount + 30;
  if(remittance==remitByCable)   //电汇加收60元手续费
    tmp = amount + 60;
  if(balance<tmp)
    cout<<"Insufficisent funds:balance "<<balance<<", withdrawal"<<tmp<<"\n";
  else
    balance -= tmp;
}//--------------------

