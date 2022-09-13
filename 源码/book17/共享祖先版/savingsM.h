//---------------------
// savings.h
//---------------------
#ifndef SAVINGS
#define SAVINGS
//---------------------
#include"account.h"
//---------------------
class Savings : public Account{
public:
  Savings(unsigned acntNo, float balan=0.0);
  virtual void Withdrawal(float amount);     //Ðéº¯Êý
protected:
  static float minbalance;
};//-----------------------------------
#endif  // SAVINGS

