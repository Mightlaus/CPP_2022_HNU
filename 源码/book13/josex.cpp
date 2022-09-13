//---------------------
//    josexx.cpp
//---------------------
#include"ringx.h"         //���߱��룬���ļ��н�ʹ��Ring
#include"josex.h"
#include<iostream>
using namespace std;
//---------------------
void Jose::Initial(){
  int num,begin,m,w;
  cout <<"please input the number of boys,\n" \
         "begin position,interval per count :\n" \
         "number of winners :\n";
  cin>>num>>begin>>m>>w;
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
  if(w<1||w>=num){
    cerr<<"bad number of winners.\n";
    exit(1);
  }
  //�������ݶ��Ϸ�ʱ�����Ը�ֵ
  numOfBoys = num;
  beginPos = begin;
  interval = m;
  wins = w;
}//--------------------
void Jose::GetWinner(){
  Ring x(numOfBoys, beginPos);     //С��Χ��Ȧ
  x.PutBoy(1);  //��������׿�ʼ
  for(int i=1; i<numOfBoys-wins+1; i++){      //������˻�ʤ��֮�������С��
    x.Count(interval);   //��С��
    x.PutBoy(0);         //���С�����
    x.ClearBoy();        //��ǰС�����뻷��
  }
  cout<<"\nthe winner is ";
  x.Count(1);    //ת��һ����ʤ����
  x.Display();   //��ʤ��
}//--------------------
