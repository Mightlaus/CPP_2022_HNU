//---------------------
// savings.cpp
//---------------------
#include"savings.h"
#include<iostream>
using namespace std;
//---------------------
Savings* Savings::pFirst = 0;  //����Ϊ��
int Savings::count = 0;       //�˻�����Ϊ0
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
Savings* Savings::First(){  //ȡ����ָ��
  return pFirst;
}//--------------------
Savings* Savings::Next(){          //ȡ���ָ��
  return pNext;
}//--------------------
int Savings::NoAccounts(){
  return count;
}//--------------------

