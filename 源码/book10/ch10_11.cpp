//---------------------
//    ch10_11.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Student{
  long number;
  float score;
  Student* next;
};//-------------------
Student* head;    //链首指针
//---------------------
Student* getNode(){
  int num;
  float sc;
  cin>>num>>sc;
  if(num==0)
    return NULL;        //结点无效,结束创建过程
  Student* p = new Student;
  p->number = num;
  p->score = sc;
  p->next = 0;
  return p;
}//--------------------
Student* Create(){
  head = getNode();  //新建第一个结点,挂入链首
  if(head==0)
    return 0;        // 返回空链表
  for(Student* pEnd=head,*pS; pS=getNode(); pEnd=pS) //pEnd指向尾结点,pS获取结点判有效性
    pEnd->next = pS;
  return head;
}//--------------------
void ShowList(Student* head){
  cout<<"now the items of list are \n";
  for( ; head; head=head->next)
    cout<<head->number<<","<<head->score<<endl;
}//--------------------
int main(){
  ShowList(Create());
}//--------------------
