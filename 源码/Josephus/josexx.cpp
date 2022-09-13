//*********************
//**    josexx.cpp    **
//*********************

#include <iostream.h>
#include "ring.h"         //���߱��룬���ļ��н�ʹ��Ring
#include "josexx.h"

void Jose::Initial()
{
  int num,begin,m,w;
  cout <<"please input the number of boys,\n" \
         "begin position,interval per count :\n" \
         "number of winners :\n";
  cin >>num >>begin >>m>>w;
  if(num<2){
    cerr<<"bad number of boys\n";
    return;
  }
  if(begin<0){
    cerr<<"bad begin position.\n";
    return;
  }
  if(m<1||m>num){
    cerr<<"bad interval number.\n";
    return;
  }
  if(w<1||w>=num){
    cerr <<"bad number of winners.\n";
    return ;
  }
  //�������ݶ��Ϸ�ʱ�����Ը�ֵ
  numOfBoys = num;
  beginPos = begin;
  interval = m;
  wins = w;
}

void Jose::GetWinner()
{
  Ring x(numOfBoys);     //С��Χ��Ȧ
  x.Count(beginPos);     //ת����ʼλ��
  for(int i=1; i<numOfBoys-wins+1; i++){      //������˻�ʤ��֮�������С��
    x.Count(interval);   //��С��
    x.PutBoy();          //���С�����
    x.ClearBoy();        //��ǰС�����뻷��
  }
  cout <<"\nthe winner is ";
  x.Display();   //��ʤ��
}
