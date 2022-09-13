//---------------------
//    josexx.cpp
//---------------------
#include"ringx.h"         //告诉编译，本文件中将使用Ring
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
  //输入数据都合法时，予以赋值
  numOfBoys = num;
  beginPos = begin;
  interval = m;
  wins = w;
}//--------------------
void Jose::GetWinner(){
  Ring x(numOfBoys, beginPos);     //小孩围成圈
  x.PutBoy(1);  //输出从行首开始
  for(int i=1; i<numOfBoys-wins+1; i++){      //处理除了获胜者之外的所有小孩
    x.Count(interval);   //数小孩
    x.PutBoy(0);         //输出小孩编号
    x.ClearBoy();        //当前小孩脱离环链
  }
  cout<<"\nthe winner is ";
  x.Count(1);    //转下一个即胜利者
  x.Display();   //获胜者
}//--------------------
