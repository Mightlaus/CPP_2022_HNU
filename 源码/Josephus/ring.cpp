//********************
//**    ring.cpp    **
//********************

#include <iostream.h>
#include <iomanip.h>
#include "ring.h"

Ring::Ring(int n)
{
  pBegin=new Boy[n];         //分配小孩结构数组
  pCurrent=pBegin;
  for(int i=1; i<=n; i++,pCurrent=pCurrent->next){
    pCurrent->next = pBegin+i%n;       //将结点链起来
    pCurrent->code=i;        //小孩编号
    //PutBoy();
  }
  cout <<endl;
  pCurrent=&pBegin[n-1];     //当前小孩位置在最后一个编号
  Display();
}

void Ring::Count(int m)
{
  for(int i=1; i<=m; i++){
    pivot = pCurrent;
    pCurrent = pCurrent->next;
  }
}

void Ring::PutBoy() const
{
  static int numInLine;
  if(numInLine++%18==0)
    cout <<endl;
  cout <<setw(4) <<pCurrent->code;
}

void Ring::ClearBoy()
{
  pivot->next=pCurrent->next;
}

Ring::~Ring()
{
  delete[]pBegin;
}

void Ring::Display()
{
  Boy* pB = pCurrent->next;
  if(!pB) return;
  do{
    pCurrent = pCurrent->next;
    PutBoy();
  }while(pB!=pCurrent->next);
  cout <<endl;
}
