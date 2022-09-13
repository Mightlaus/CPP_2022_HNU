//---------------------
// ch17_5.cpp
//---------------------
#include"account.h"
#include"savingsM.h"
#include"checkingM.h"
#include<iostream>
#include<fstream>
using namespace std;
//---------------------
void getLink();
void doBusiness(Account* p);
//---------------------
int main(){
  getLink();                                        //��ȡ����
  for(Account* p=Account::First(); p; p=p->Next())  //��ȡ����ָ��,��������
    doBusiness(p);                                  //�ͷ�����
  Account::RemoveLink();
}//--------------------
void getLink(){
  ifstream cin("acc.txt");
  char c;
  unsigned int ac;
  for(float blan; cin>>c>>ac>>blan; ) //ÿ������������
    if(c=='S') new Savings(ac,blan);
    else       new Checking(ac,blan);
}//--------------------
void doBusiness(Account* p){
  p->Withdrawal(2);       //��ȡ�·�
  p->Display();
}//--------------------

