//---------------------
//    jose.cpp
//---------------------
#include"ring.h"    //告诉编译，本文件中将使用Ring
#include"jose.h"
#include<iostream>
#include<cstdlib>   // 用到exit()
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
  //输入数据都合法时，予以赋值
  numOfBoys=num;
  beginPos=begin;
  interval=m;
}//--------------------
void Jose::GetWinner(){
  Ring x(numOfBoys,beginPos);      //小孩围成圈,转到开始位置
  for(int i=1; i<numOfBoys; i++){  //处理除了获胜者之外的所有小孩
    x.Count(interval);   //数小孩
    x.PutBoy(0);         //输出小孩编号
    x.ClearBoy();        //当前小孩脱离环链
  }
  x.Count(1);
  cout<<"\nthe winner is ";
  x.PutBoy(0);   //获胜者
  cout<<"\n";
}//--------------------
