//---------------------
// checking.h
//---------------------
#ifndef CHECKING
#define CHECKING
//-------------------------------------
enum REMIT{remitByPost, remitByCable, other}; //�Ż�, ���, ��
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
  static Checking* First();  //ȡ����ָ��
  Checking* Next();          //ȡ���ָ��
  static int NoAccounts();
  void Display()const;
  void Deposit(float amount){ balance += amount; }
  void Withdrawal(float amount);
  void setRemit(REMIT re){ remittance = re; }
};//-----------------------------------
#endif  // CHECKING

 