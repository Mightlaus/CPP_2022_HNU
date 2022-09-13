//---------------------
//    ring.cpp
//---------------------
#include"ring.h"
#include<iostream>
#include<iomanip>
using namespace std;
//---------------------
Ring::Ring(int n, int beg){
  pBegin = new Boy[n];         //����С���ṹ����
  pCurrent = pBegin;
  for(int i=1; i<=n; i++){
    pCurrent[i-1].next = pBegin+i%n;       //�����������
    pCurrent[i-1].code=i;        //С�����
  }
  pCurrent = &pBegin[n+beg-2];     //��ǰС��λ�������һ�����
  Display();
}//--------------------
void Ring::Count(int m){
  for(int i=1; i<=m; i++){
    pivot = pCurrent;
    pCurrent = pCurrent->next;
  }
}//--------------------
void Ring::PutBoy(bool f) const{
  static int numInLine;
  if(f){   //����һ����������һ��
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

