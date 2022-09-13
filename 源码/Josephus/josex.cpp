//*********************
//**    josex.cpp    **
//*********************

#include <iostream.h>
#include "ring.h"         //告诉编译，本文件中将使用Ring
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
  //输入数据都合法时，予以赋值
  numOfBoys=num;
  beginPos=begin;
  interval=m;
}

void Jose::GetWinner()
{
  Ring x(numOfBoys);     //小孩围成圈
  x.Count(beginPos);     //转到开始位置
  for(int i=1; i<numOfBoys; i++){      //处理除了获胜者之外的所有小孩
    x.Count(interval);   //数小孩
    x.PutBoy();          //输出小孩编号
    x.ClearBoy();        //当前小孩脱离环链
  }
  cout <<"\nthe winner is ";
  x.PutBoy();   //获胜者
}
