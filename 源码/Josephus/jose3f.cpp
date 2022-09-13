//---------------------
// Josephus问题解法三
//    jose3.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<cstdlib>       //用到exit(1)
using namespace std;
//---------------------
struct Jose{            //小孩结构
  int code;             //存放小孩编号
  Jose* next;           //用于指向下一个小孩结点
};//-------------------
int n;                         //小孩数
int begin;                     //开始位置
int m;                         //数小孩间隔
Jose* pivot;                   //链表哨兵
Jose* pCur;                    //当前结点指针
//---------------------
void assign();                 //赋初值，返回1：成功，0：失败
Jose* initial();               //初始化环链表
void count(int m);             //数m个小孩
void process();                //处理所有未获胜小孩
//---------------------
int main(){
  assign();
  Jose* pJose = initial();     //初始化结构数组
  process();                   //处理所有未获胜小孩
  cout<<"\nthe winner is "<<pCur->code<<endl;
  delete[] pJose;              //返还结构数组
}//--------------------
void assign(){                 //赋初值
  cout<<"please input the number,begin,count:\n";
  cin>>n>>begin>>m;
  if(n<2){                     //小孩数校验
    cerr<<"bad number of boys\n";
    exit(1);
  }
  if(begin<0){                 //开始位置校验
    cerr<<"bad begin position.\n";
    exit(1);
  }
  if(m<1 || m>n){              //数小孩个数校验
    cerr<<"bad interval number.\n";
    exit(1);
  }
}//--------------------
Jose* initial(){               //链表初始化
  Jose* px = new Jose[n];
  for(int i=1; i<=n; i++){
    px[i-1].next = &px[i%n];
    px[i-1].code = i;
    cout<<setw(4)<<i;
  }
  cout<<endl;
  pCur = &px[(n+begin-1)%n];   //指向结构数组开数第一个元素
  return px;
}//--------------------
void count(int m){             //数m个小孩
  for(int i=0; i<m; i++){
    pivot = pCur;
    pCur = pivot->next;
  }
}//--------------------
void process(){               //处理获胜者决出之前的所有n-1个小孩
  for(int i=1; i<n; i++){
    count(m);                    //数m个小孩
    cout<<setw(4)<<pCur->code;
    pivot->next = pCur->next;    //小孩脱链(前一小孩指向后一小孩)
    pCur = pivot;                //当前指针则指向前一小孩呈开数态
  }
}//--------------------
