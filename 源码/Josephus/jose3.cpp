//******************************
//**    Josephus问题解法三    **
//**    jose3.cpp             **
//******************************
#include <iostream.h>
#include <iomanip.h>

struct Jose{            //小孩结构
  int code;             //存放小孩编号
  Jose* next;           //用于指向下一个小孩结点
};

//全局变量
int n;                         //小孩数
int begin;                     //开始位置
int m;                         //数小孩间隔
Jose* pivot;                   //链表哨兵
Jose* pCur;                    //当前结点指针

//函数声明
int assign();                  //赋初值，返回1：成功，0：失败
void initial(Jose* pBoys);     //初始化环链表
void count(int m);             //数m个小孩
void process();                //处理所有未获胜小孩

//主函数
void main()
{
  if(!assign()){
    cout <<"The program failed.\n";
    return;
  }

  Jose* pJose=new Jose[n];     //分配结构数组
  initial(pJose);              //初始化结构数组
  count(begin);                //转到开始位置
  process();                   //处理所有未获胜小孩

  cout <<"\nthe winner is " <<pCur->code <<endl;
  delete[]pJose;               //返还结构数组给堆空间
}

//赋初值
int assign()
{
  int number,start,count;
  cout <<"please input the number,begin,count:\n";
  cin >>number >>start >>count;

  if(number<2){                //小孩数校验
    cerr <<"bad number of boys\n";
    return 0;
  }

  if(start<0){                 //开始位置校验
    cerr <<"bad begin position.\n";
    return 0;
  }

  if(count<1 || count >number){//数小孩个数校验
    cerr <<"bad interval number.\n";
    return 0;
  }

  n=number; begin=start; m=count; //赋全局变量值
  return 1;
}

//链表初始化
void initial(Jose* pJose)
{
  int l=0;
  Jose* px=pJose;

  for(int i=1;i<=n;i++){
    px->next=pJose+i%n;
    px->code=i;
    px=px->next;
    if((l++%10)==0)               //输出行中个数控制
      cout <<endl;
    cout <<setw(4) <<i;
  }
  cout <<endl;
  pCur=pJose+n-1;                 //指向结构数组最后一个元素
}

//数m个小孩
void count(int m)
{
  for(int i=0; i<m; i++){
    pivot=pCur;
    pCur=pivot->next;
  }
}

//处理获胜者决出之前的所有小孩
void process()
{
  int l=0;
  for(int i=1; i<n-1; i++){
    count(m);                    //数m个小孩
    if((l++%10)==0)              //输出行中个数控制
      cout <<endl;
    cout <<setw(4) <<pCur->code;

    pivot->next=pCur->next;      //小孩脱链
    pCur=pivot;
  }
}
