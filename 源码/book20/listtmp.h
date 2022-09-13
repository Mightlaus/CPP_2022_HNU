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
  Node<T>* pFirst, *pivot;        //链首结点指针,哨兵指针
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
  Node<T>* tmp = new Node<T>;             //①
  tmp->tValue = t;                       //②
  tmp->pNext = pFirst;              //③
  pFirst = tmp;                     //④
}//--------------------
template<class T>
void List<T>::Remove(T& t){
  Node<T>* q = Find(t);                 //定位待删的结点
  if(!q) return;  if(q==pFirst)    pFirst = pFirst->pNext;  else    pivot->pNext = q->pNext;  delete q;                         //⑥}//--------------------
template<class T>
Node<T>* List<T>::Find(T& t){
  if(pFirst->tValue==t)
    return pFirst;
  for(Node<T>* p=pFirst->pNext; p; pivot=p,p=p->pNext)
    if(p->tValue==t)
      return p;   // pivot指向上一结点
  return 0;
}//--------------------
template<class T>
void List<T>::PrintList(){
  for(Node<T>* p=pFirst; p; p=p->pNext)
    cout<<p->tValue<<" ";             //须有T的友元处理T对象输出  cout<<endl;
}//--------------------
template<class T>
List<T>::~List(){
  for(Node<T>* p; p=pFirst; delete p)
    pFirst = pFirst->pNext;
}//--------------------
#endif

