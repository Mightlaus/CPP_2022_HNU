//---------------------
// checking.h
//---------------------
#ifndef CHECKING
#define CHECKING
//---------------------
#include"account.h"
//---------------------
enum REMIT{remitByPost, remitByCable, other}; //ÐÅ»ã, µç»ã, ÎÞ
//---------------------
class Checking : public Account{
protected:
  REMIT remittance;
public:
  Checking(unsigned acntNo, float balan=0.0);
  void Withdrawal(float amount);
  void setRemit(REMIT re){ remittance = re; }
};//-------------------
#endif  // CHECKING

