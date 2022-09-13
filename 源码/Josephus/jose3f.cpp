//---------------------
// Josephus����ⷨ��
//    jose3.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<cstdlib>       //�õ�exit(1)
using namespace std;
//---------------------
struct Jose{            //С���ṹ
  int code;             //���С�����
  Jose* next;           //����ָ����һ��С�����
};//-------------------
int n;                         //С����
int begin;                     //��ʼλ��
int m;                         //��С�����
Jose* pivot;                   //�����ڱ�
Jose* pCur;                    //��ǰ���ָ��
//---------------------
void assign();                 //����ֵ������1���ɹ���0��ʧ�ܪ�
Jose* initial();               //��ʼ��������
void count(int m);             //��m��С��
void process();                //��������δ��ʤС��
//---------------------
int main(){
  assign();
  Jose* pJose = initial();     //��ʼ���ṹ����
  process();                   //��������δ��ʤС��
  cout<<"\nthe winner is "<<pCur->code<<endl;
  delete[] pJose;              //�����ṹ����
}//--------------------
void assign(){                 //����ֵ
  cout<<"please input the number,begin,count:\n";
  cin>>n>>begin>>m;
  if(n<2){                     //С����У��
    cerr<<"bad number of boys\n";
    exit(1);
  }
  if(begin<0){                 //��ʼλ��У��
    cerr<<"bad begin position.\n";
    exit(1);
  }
  if(m<1 || m>n){              //��С������У��
    cerr<<"bad interval number.\n";
    exit(1);
  }
}//--------------------
Jose* initial(){               //�����ʼ��
  Jose* px = new Jose[n];
  for(int i=1; i<=n; i++){
    px[i-1].next = &px[i%n];
    px[i-1].code = i;
    cout<<setw(4)<<i;
  }
  cout<<endl;
  pCur = &px[(n+begin-1)%n];   //ָ��ṹ���鿪����һ��Ԫ��
  return px;
}//--------------------
void count(int m){             //��m��С��
  for(int i=0; i<m; i++){
    pivot = pCur;
    pCur = pivot->next;
  }
}//--------------------
void process(){               //�����ʤ�߾���֮ǰ������n-1��С��
  for(int i=1; i<n; i++){
    count(m);                    //��m��С��
    cout<<setw(4)<<pCur->code;
    pivot->next = pCur->next;    //С������(ǰһС��ָ���һС��)
    pCur = pivot;                //��ǰָ����ָ��ǰһС���ʿ���̬
  }
}//--------------------
