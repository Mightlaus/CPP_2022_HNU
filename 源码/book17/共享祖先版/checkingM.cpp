//---------------------
// checking.cpp
//---------------------
#include"checkingm.h"
#include"account.h"
#include<iostream>
using namespace std;
//---------------------
Checking::Checking(unsigned acntNo, float balan)  //�����ʼ������������
  : Account(acntNo, balan), remittance(other){}
//---------------------
void Checking::Withdrawal(float amount){
  float tmp = amount;
  if(remittance==remitByPost)    //�Ż����30Ԫ������
    tmp = amount + 30;
  if(remittance==remitByCable)   //������60Ԫ������
    tmp = amount + 60;
  if(balance<tmp)
    cout<<"Insufficisent funds:balance "<<balance<<", withdrawal"<<tmp<<"\n";
  else
    balance -= tmp;
}//--------------------

