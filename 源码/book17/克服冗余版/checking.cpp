//---------------------
// checking.cpp
//---------------------
#include"checking.h"
//---------------------
Checking::Checking(unsigned acntNo, float balan)  //�����ʼ������������
  : Savings(acntNo, balan), remittance(other){}
//---------------------
void Checking::Withdrawal(float amount){
  float tmp = amount;
  if(remittance==remitByPost)    //�Ż����30Ԫ������
    tmp = amount + 30;
  if(remittance==remitByCable)   //������60Ԫ������
    tmp = amount + 60;
  Savings::Withdrawal(tmp);      //���û���ȡ�����
}//--------------------

