//---------------------
//    Josephus����ⷨ��
//    jose6.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
//---------------------
void Detach();    //С�����,���¸�С��Ϊ��ǰλ
void Step(int m); //ָ����¸�С��Ϊ��ǰλ��Ųm-1��λ��
void Init(int);   //��ʼ��С����Ų����
//---------------------
list<int> jose;              //������������ģ�����ȫ�ֶ���
list<int>::iterator iter;    //����jose��������(������ָ��)
//---------------------
int main(){
  int n=10, s=4, m=4;        //ȡ�����������ݷֱ��ʾС����,����λ,������
  Init(n);
  iter = jose.begin();
  Step(s+1);                 //����ǰһ��λ��,����һ������һ��λ��
  for(int i=1; i<n; i++){
    Step(m);
    cout<<" "<<*iter;
    Detach();
  }
  cout<<"\nThe winner is "<<*iter<<"\n";}//--------------------void Init(int n){      
  for(int i=1; i<=n; i++){     //˳����벢���
    jose.insert(jose.end(),i);
    cout<<" "<<i;
  }
  cout<<"\n";
}//--------------------
void Detach(){
  iter = jose.erase(iter);  //�ѹ�iter���,������һ������ַ
  if(iter==jose.end())      //���ѵ�β,����������,���л�������
    iter=jose.begin();
}//--------------------
void Step(int m){
  for(int i=1; i<m; i++)
    if(++iter==jose.end())    //��������
      iter=jose.begin();
}//--------------------
