//---------------------
// savings.h
//---------------------
#ifndef SAVINGS
#define SAVINGS
//---------------------
class Savings{
public:
  Savings(unsigned acntNo, float balan=0.0);
  unsigned AccountNo(){ return acntNumber; }
  float AcntBalan(){ return balance; }
  static Savings* First();  //ȡ����ָ��
  Savings* Next();          //ȡ���ָ��
  static int NoAccounts();
  void Display()const;
  void Deposit(float amount){ balance += amount; }
  void Withdrawal(float amount);
protected:
  static Savings* pFirst;
  static Savings* pTail;
  Savings* pNext;
  static int count;
  unsigned acntNumber;
  float balance;
};//-----------------------------------
#endif  // SAVINGS

 