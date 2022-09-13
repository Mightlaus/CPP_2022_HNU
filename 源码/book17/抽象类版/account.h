//---------------------
// account.h
//---------------------
#ifndef ACCOUNT
#define ACCOUNT
//---------------------
class Account{
public:
  Account(unsigned acntNo, float balan=0.0);
  unsigned AccountNo(){ return acntNumber; }
  float AcntBalan(){ return balance; }
  static Account* pFirst;
  Account* Next();          //ȡ���ָ��
  static int NoAccounts();
  void Display()const;
  void Deposit(float amount){ balance += amount; }
  virtual void Withdrawal(float amount) = 0;     //���麯��
  void Insert(Account* p);      //��������
  Account* Remove(Account* p);  //������һ�����ָ��
  static void Show(){
    for(Account* p=pFirst; p; p=p->pNext)
      p->Display();
  }
protected:
  Account* pNext;
  static int count;
  unsigned acntNumber;
  float balance;
};//-----------------------------------
#endif  // ACCOUNT

 