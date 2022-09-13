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
  getLink();                                        //获取链表
  for(Account* p=Account::First(); p; p=p->Next())  //获取链首指针,遍历链表
    doBusiness(p);                                  //释放链表
  Account::RemoveLink();
}//--------------------
void getLink(){
  ifstream cin("acc.txt");
  char c;
  unsigned int ac;
  for(float blan; cin>>c>>ac>>blan; ) //每个结点插入链首
    if(c=='S') new Savings(ac,blan);
    else       new Checking(ac,blan);
}//--------------------
void doBusiness(Account* p){
  p->Withdrawal(2);       //收取月费
  p->Display();
}//--------------------

