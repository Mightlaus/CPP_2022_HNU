//******************************
//**    Josephus问题解法六    **
//**    jose6.cpp             **
//******************************

#include <iostream>
#include <iomanip>
#include <classlib\listimp>

void Display(int);
void Step(int m);
int* Init(int);

TIListImp<int> josephus;                  //创建单向链表模板类的全局对象
TIListIteratorImp<int> iter(josephus);    //创建josephus迭代算子
int* curpos;                              //当前小孩位置

void main()
{
  int n=10, s=4, m=4;                 //随取三个合理的整数
  int* ap=Init(n);
  Step(s);
  for(int i=1; i<n; i++){
    Step(m);
    Display(*curpos);
    josephus.Detach(curpos);
  }
  cout <<"\nThe winner is "<<*iter.Current() << endl;  delete[]ap;
}

//以下是构造链表，初始化小孩编号的函数
int* Init(int n)
{
  int* a = new int[n];
  for(int i=0; i<n; i++){
    a[i] = n - i;
    Display(i+1);
    josephus.Add(&a[i]);
  }
  Display ( -1 );
  iter.Restart();           //初始化迭代算子
  return a;
}

//以下是显示一个小孩编号的函数
void Display(int n)
{
  static int k;
  if(n<0){
    k = 0;
    cout <<endl;
    return;
  }
  cout <<setw(4) <<n;
  if (!(++k%10))
    cout <<endl;
}

//以下是要将指针从当前位置挪到往下数第m个小孩的位置
void Step(int m)
{
  for(int i=0; i<m; i++){
    curpos = iter.Current();
    iter++;
    if(!iter.Current())    //模拟环链表操作
      iter.Restart();
  }
}