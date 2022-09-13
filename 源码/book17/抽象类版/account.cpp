//---------------------
// account.cpp
//---------------------
#include"account.h"
#include<iostream>
using namespace std;
//---------------------
Account* Account::pFirst = 0;  //链表为空
int Account::count = 0;        //账户个数为0
//---------------------
Account::Account(unsigned acntNo, float balan)
  :acntNumber(acntNo), balance(balan){
  count++;
  if(pFirst==0)
    pFirst = this;
  else
    pTail->pNext = this;
  pTail = this;
  pNext=0;
}//--------------------
void Account::Display()const{
  cout<<"Account number:"<<acntNumber<<" = "<<balance<<"\n";
}//--------------------
void Account::Withdrawal(float amount){
  return;    //不做任何事
}//--------------------
Account* Account::First(){  //取链首指针
  return pFirst;
}//--------------------
Account* Account::Next(){          //取结点指针
  return pNext;
}//--------------------
int Account::NoAccounts(){
  return count;
}//--------------------

