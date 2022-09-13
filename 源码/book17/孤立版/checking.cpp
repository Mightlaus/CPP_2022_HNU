//---------------------
// checking.cpp
//---------------------
#include"checking.h"
#include<iostream>
using namespace std;
//---------------------
Checking* Checking::pFirst = 0;  //����Ϊ��
int Checking::count = 0;         //�˻�����Ϊ0
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
  if(remittance==remitByPost)          //�Ż����30Ԫ������
    amount += 30;
  if(remittance==remitByCable)         //������60Ԫ������
    amount += 60;
  if(balance < amount)
    cout<<"Insufficient funds withdrawal: "<<amount<<"\n";
  else
    balance -= amount;
}//--------------------
Checking* Checking::First(){  //ȡ����ָ��
  return pFirst;
}//--------------------
Checking* Checking::Next(){          //ȡ���ָ��
  return pNext;
}//--------------------
int Checking::NoAccounts(){
  return count;
}//--------------------

 