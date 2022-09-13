//---------------------
//    Josephus问题解法二
//    jose2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Jose{         //小孩结点
  int code;
  Jose* next;
};//-------------------
int main(){
  cout<<"please input the number of boys,\n"  //小孩数
      <<"          interval of counting:\n";  //数小孩个数
  int nBoys,interval;
  cin>>nBoys>>interval;   //赋初值

  Jose* pJose = new Jose[nBoys];   //从堆内存获取小孩结构数组
  for(int i=0; i<nBoys; i++){      //初始化结构数组:环链,编号,输出
    cout<<(i%10 ? "  ":"\n  ")<<i+1;     //元素按10个一行输出
    pJose[i].code = i+1;                 //小孩编号
    pJose[i].next = &pJose[(i+1)%nBoys]; //链到下一个元素
  }
  Jose* pivot;                           //链表哨兵
  Jose* pCurrent = &pJose[nBoys-1];      //下一个就是数组第一个元素pJose[0]
  for(int items=0; items<nBoys-1; ){     //处理未获胜的所有小孩
    for(int j=interval; j--; pCurrent=pCurrent->next)   //数interval个小孩
      pivot = pCurrent;
    cout<<(items++%10 ? "  " : "\n  ")<<pCurrent->code; //离队的小孩逐个输出
    pivot->next = pCurrent->next;    //小孩脱链
  }
  cout<<"\n\nthe winner is "<<pivot->code<<endl;     //获胜者
  delete[] pJose;      //返还堆空间
}//--------------------

