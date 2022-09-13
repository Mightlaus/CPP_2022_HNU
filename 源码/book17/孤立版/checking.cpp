//---------------------
// checking.cpp
//---------------------
#include"checking.h"
#include<iostream>
using namespace std;
//---------------------
Checking* Checking::pFirst = 0;  //链表为空
int Checking::count = 0;         //账户个数为0
//---------------------
Checking::Checking(unsigned acntNo, float balan)
  :acntNumber(acntNo), balance(balan), remittance(other){
  count++;
  if(pFirst==0)
    pFirst = this;
  else
    pTail->pNext = this;
  pTail = this;
  pNext=0;
}//--------------------
void Checking::Display()const{
  cout<<"Checking Account:"<<acntNumber<<" = "<<balance<<"\n";
}//--------------------
void Checking::Withdrawal(float amount){
  if(remittance==remitByPost)          //信汇加收30元手续费
    amount += 30;
  if(remittance==remitByCable)         //电汇加收60元手续费
    amount += 60;
  if(balance < amount)
    cout<<"Insufficient funds withdrawal: "<<amount<<"\n";
  else
    balance -= amount;
}//--------------------
Checking* Checking::First(){  //取链首指针
  return pFirst;
}//--------------------
Checking* Checking::Next(){          //取结点指针
  return pNext;
}//--------------------
int Checking::NoAccounts(){
  return count;
}//--------------------

 