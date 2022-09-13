//---------------------
// savings.cpp
//---------------------
#include"savingsM.h"
#include"account.h"
#include<iostream>
using namespace std;
//---------------------
float Savings::minbalance = 500;       //…Ë÷√Õ∏÷ß∑∂Œß
//---------------------
Savings::Savings(unsigned acntNo, float balan)
  : Account(acntNo, balan){}
//---------------------
void Savings::Withdrawal(float amount){
  if(balance+minbalance < amount)
    cout <<"Insufficient funds: balance "<<balance<<",withdrawal"<<amount<<"\n";
  else
    balance -= amount;
}//--------------------

