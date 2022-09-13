//---------------------
// checking.h
//---------------------
#ifndef CHECKING
#define CHECKING
//---------------------
#include"savingsl.h"
//---------------------
enum REMIT{remitByPost, remitByCable, other}; //�Ż�, ���, ��
//---------------------
class Checking : public Savings{
protected:
  REMIT remittance;
public:
  Checking(unsigned acntNo, float balan=0.0);
  void Withdrawal(float amount);
  void setRemit(REMIT re){ remittance = re; }
};//-------------------
#endif  // CHECKING

