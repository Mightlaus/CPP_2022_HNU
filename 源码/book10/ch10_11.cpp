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
Student* head;    //����ָ��
//---------------------
Student* getNode(){
  int num;
  float sc;
  cin>>num>>sc;
  if(num==0)
    return NULL;        //�����Ч,������������
  Student* p = new Student;
  p->number = num;
  p->score = sc;
  p->next = 0;
  return p;
}//--------------------
Student* Create(){
  head = getNode();  //�½���һ�����,��������
  if(head==0)
    return 0;        // ���ؿ�����
  for(Student* pEnd=head,*pS; pS=getNode(); pEnd=pS) //pEndָ��β���,pS��ȡ�������Ч��
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
