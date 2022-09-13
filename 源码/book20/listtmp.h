//---------------------
//    listtmp.h
//---------------------
#ifndef LIST
#define LIST
#include<iostream>
using namespace std;
//---------------------
template<class T> struct Node{
  Node* pNext;
  T tValue;
};//-------------------
template<class T> class List{
  Node<T>* pFirst, *pivot;        //���׽��ָ��,�ڱ�ָ�몤
public:
  List(){ pFirst=0; }
  void Add(T&);
  void Remove(T&);
  Node<T>* Find(T&);
  void PrintList();
 ~List();
};//-------------------
template<class T>
void List<T>::Add(T& t){
  Node<T>* tmp = new Node<T>;             //��
  tmp->tValue = t;                       //��
  tmp->pNext = pFirst;              //��
  pFirst = tmp;                     //��
}//--------------------
template<class T>
void List<T>::Remove(T& t){
  Node<T>* q = Find(t);                 //��λ��ɾ�Ľ��
  if(!q) return;  if(q==pFirst)    pFirst = pFirst->pNext;  else    pivot->pNext = q->pNext;  delete q;                         //��}//--------------------
template<class T>
Node<T>* List<T>::Find(T& t){
  if(pFirst->tValue==t)
    return pFirst;
  for(Node<T>* p=pFirst->pNext; p; pivot=p,p=p->pNext)
    if(p->tValue==t)
      return p;   // pivotָ����һ���
  return 0;
}//--------------------
template<class T>
void List<T>::PrintList(){
  for(Node<T>* p=pFirst; p; p=p->pNext)
    cout<<p->tValue<<" ";             //����T����Ԫ����T�������  cout<<endl;
}//--------------------
template<class T>
List<T>::~List(){
  for(Node<T>* p; p=pFirst; delete p)
    pFirst = pFirst->pNext;
}//--------------------
#endif

