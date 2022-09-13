//---------------------
// savings.cpp
//---------------------
#include"savings.h"
#include<iostream>
using namespace std;
//---------------------
Savings* Savings::pFirst = 0;  //链表为空
int Savings::count = 0;       //账户个数为0
//---------------------
Savings::Savings(unsigned acntNo, float balan)
  :acntNumber(acntNo), balance(balan){
  count++;
  if(pFirst==0)
    pFirst = this;
  else
    pTail->pNext = this;
  pTail = this;
  pNext=0;
}//--------------------
void Savings::Display()const{
  cout<<"Savings Account:"<<acntNumber<<" = "<<balance<<"\n";
}//--------------------
void Savings::Withdrawal(float amount){
  if(balance < amount)
    cout <<"Insufficient funds withdrawal: "<<amount<<"\n";
  else
    balance -= amount;
}//--------------------
Savings* Savings::First(){  //取链首指针
  return pFirst;
}//--------------------
Savings* Savings::Next(){          //取结点指针
  return pNext;
}//--------------------
int Savings::NoAccounts(){
  return count;
}//--------------------

