//******************************
//**    Josephus问题解法二    **
//**    jose2.cpp             **
//******************************

#include <iostream.h>
#include <iomanip.h>

struct jose         //小孩结点
{
  int code;
  jose* next;
};

void main()
{
  //赋初值
  int numOfBoys,interval;
  cout <<"please input the number of boys,\n"  //小孩数
       <<"          interval of counting:\n";  //数小孩个数
  cin >>numOfBoys >>interval;

  //建立小孩结构数组
  jose* pJose=new jose[numOfBoys];    //从堆内存分配空间
  jose* pCurrent=pJose;    //当前结点指针

  //初始化结构数组：构成环链，小孩编号，输出编号
  int itemsInLine=0;    //输出项数

  for(int i=1; i<=numOfBoys; i++){
    pCurrent->next=pJose+i%numOfBoys;     //链到下一个元素
    pCurrent->code=i;           //小孩编号
    pCurrent=pCurrent->next;    //改变当前位置
    if(itemsInLine++ % 10==0)
      cout <<endl;
    cout <<setw(4) <<i;
  }      //pCurrent此时等于pJose
  itemsInLine=0;

  jose* pivot;      //链表哨兵
  pCurrent=&pJose[numOfBoys-1];    //下一个就是数组第一个元素pJose[0]

  while(pCurrent->next!=pCurrent){   //处理未获胜的所有小孩
    for(int j=0; j<interval; j++){        //数interval个小孩
      pivot=pCurrent;
      pCurrent=pivot->next;
    }

    if(itemsInLine++ % 10 == 0)     //输出小孩
      cout <<endl;
    cout <<setw(4) <<pCurrent->code;
    pivot->next = pCurrent->next;    //小孩脱链
    pCurrent=pivot;
  }

  cout <<"\n\nthe winner is "
       <<pCurrent->code <<endl;     //获胜者

  delete[]pJose;      //返还堆空间
}        //endof main()
