//*********************
//**    josex.cpp    **
//*********************

#include <iostream.h>
#include "ring.h"         //���߱��룬���ļ��н�ʹ��Ring
#include "josex.h"

void Jose::Initial()
{
  int num,begin,m;
  cout <<"please input the number of boys," \
         "begin position,interval per count :\n";
  cin >>num >>begin >>m;
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
  //�������ݶ��Ϸ�ʱ�����Ը�ֵ
  numOfBoys=num;
  beginPos=begin;
  interval=m;
}

void Jose::GetWinner()
{
  Ring x(numOfBoys);     //С��Χ��Ȧ
  x.Count(beginPos);     //ת����ʼλ��
  for(int i=1; i<numOfBoys; i++){      //������˻�ʤ��֮�������С��
    x.Count(interval);   //��С��
    x.PutBoy();          //���С�����
    x.ClearBoy();        //��ǰС�����뻷��
  }
  cout <<"\nthe winner is ";
  x.PutBoy();   //��ʤ��
}
