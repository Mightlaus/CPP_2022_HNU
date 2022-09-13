//---------------------
//    jose.cpp
//---------------------
#include"ring.h"    //���߱��룬���ļ��н�ʹ��Ring
#include"jose.h"
#include<iostream>
#include<cstdlib>   // �õ�exit()
using namespace std;
//---------------------
void Jose::Initial(){
  int num,begin,m;
  cout<<"please input the number of boys," \
        "begin position,interval per count :\n";
  cin>>num>>begin>>m;
  if(num<2){
    cerr<<"bad number of boys\n";
    exit(1);
  }
  if(begin<0){
    cerr<<"bad begin position.\n";
    exit(1);
  }
  if(m<1||m>num){
    cerr<<"bad interval number.\n";
    exit(1);
  }
  //�������ݶ��Ϸ�ʱ�����Ը�ֵ
  numOfBoys=num;
  beginPos=begin;
  interval=m;
}//--------------------
void Jose::GetWinner(){
  Ring x(numOfBoys,beginPos);      //С��Χ��Ȧ,ת����ʼλ��
  for(int i=1; i<numOfBoys; i++){  //������˻�ʤ��֮�������С��
    x.Count(interval);   //��С��
    x.PutBoy(0);         //���С�����
    x.ClearBoy();        //��ǰС�����뻷��
  }
  x.Count(1);
  cout<<"\nthe winner is ";
  x.PutBoy(0);   //��ʤ��
  cout<<"\n";
}//--------------------
