//---------------------
//    ringx.cpp
//---------------------
#include"ringx.h"
#include<iostream>
#include<iomanip>
using namespace std;
//---------------------
Ring::Ring(int n, int beg){
  pBegin = new Boy[n];         //分配小孩结构数组
  pCurrent = pBegin;
  for(int i=1; i<=n; i++){
    pCurrent[i-1].next = pBegin+i%n;       //将结点链起来
    pCurrent[i-1].code=i;        //小孩编号
  }
  Display();
  pCurrent = &pBegin[n-1];     //当前小孩位置在最后一个编号
}//--------------------
void Ring::Count(int m){
  for(int i=1; i<=m; i++){
    pivot = pCurrent;
    pCurrent = pCurrent->next;
  }
}//--------------------
void Ring::PutBoy(bool f) const{
  static int numInLine;
  if(f){   //打完一轮则重置新一轮
    numInLine = 0;
    return ;
  }
  if(numInLine++%10==0)
    cout<<endl;
  cout<<setw(4)<<pCurrent->code;
}//--------------------
void Ring::ClearBoy(){
  pivot->next=pCurrent->next;
}//--------------------
Ring::~Ring(){
  delete[] pBegin;
}//--------------------
void Ring::Display(){ //从当前结点开始打印整个环
  PutBoy(1);
  Boy* pB=pCurrent;
  PutBoy(0);
  while((pCurrent=pCurrent->next)!=pB)
    PutBoy(0);
}//--------------------
