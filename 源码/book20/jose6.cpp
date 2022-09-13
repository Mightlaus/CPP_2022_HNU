//---------------------
//    Josephus问题解法六
//    jose6.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
//---------------------
void Detach();    //小孩离队,置下个小孩为当前位
void Step(int m); //指针从下个小孩为当前位起挪m-1个位置
void Init(int);   //初始化小孩编号并输出
//---------------------
list<int> jose;              //创建单向链表模板类的全局对象
list<int>::iterator iter;    //创建jose迭代算子(链表结点指针)
//---------------------
int main(){
  int n=10, s=4, m=4;        //取三个样本数据分别表示小孩数,开数位,数个数
  Init(n);
  iter = jose.begin();
  Step(s+1);                 //到超前一个位置,即下一轮数第一个位置
  for(int i=1; i<n; i++){
    Step(m);
    cout<<" "<<*iter;
    Detach();
  }
  cout<<"\nThe winner is "<<*iter<<"\n";}//--------------------void Init(int n){      
  for(int i=1; i<=n; i++){     //顺序插入并输出
    jose.insert(jose.end(),i);
    cout<<" "<<i;
  }
  cout<<"\n";
}//--------------------
void Detach(){
  iter = jose.erase(iter);  //脱钩iter结点,返回下一个结点地址
  if(iter==jose.end())      //若已到尾,则跳到链首,履行环链功能
    iter=jose.begin();
}//--------------------
void Step(int m){
  for(int i=1; i<m; i++)
    if(++iter==jose.end())    //环链操作
      iter=jose.begin();
}//--------------------
