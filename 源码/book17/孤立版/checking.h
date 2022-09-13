//---------------------
// checking.h
//---------------------
#ifndef CHECKING
#define CHECKING
//-------------------------------------
enum REMIT{remitByPost, remitByCable, other}; //信汇, 电汇, 无
//-------------------------------------
class Checking{
protected;
  static Checking* pFirst;
  Checking* pNext;
  static int count;
  unsigned acntNumber;
  float balance;
  REMIT remittance;
public:
  Checking(unsigned acntNo, float balan=0.0);
  unsigned AccountNo(){ return acntNumber; }
  float AcntBalan(){ return balance; }
  static Checking* First();  //取链首指针
  Checking* Next();          //取结点指针
  static int NoAccounts();
  void Display()const;
  void Deposit(float amount){ balance += amount; }
  void Withdrawal(float amount);
  void setRemit(REMIT re){ remittance = re; }
};//-----------------------------------
#endif  // CHECKING

 