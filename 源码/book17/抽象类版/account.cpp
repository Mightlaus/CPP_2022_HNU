//---------------------
// account.cpp
//---------------------
#include"account.h"
#include<iostream>
using namespace std;
//---------------------
Account* Account::pFirst = 0;  //����Ϊ��
int Account::count = 0;        //�˻�����Ϊ0
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
  return;    //�����κ���
}//--------------------
Account* Account::First(){  //ȡ����ָ��
  return pFirst;
}//--------------------
Account* Account::Next(){          //ȡ���ָ��
  return pNext;
}//--------------------
int Account::NoAccounts(){
  return count;
}//--------------------

