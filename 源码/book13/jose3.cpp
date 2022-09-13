//---------------------
//   Josephus����ⷨ��
//    jose3.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<cstdlib>   //�õ�exit()
using namespace std;
//---------------------
struct Jose{            //С���ṹ
  int code;             //���С�����
  Jose* next;           //����ָ����һ��С�����
};//-------------------
int n;                  //С����
int begin;              //��ʼλ��
int m;                  //��С�����
Jose* pJose;            //������ָ��
Jose* pivot;            //�����ڱ�
Jose* pCur;             //��ǰ���ָ��
//��������-------------
void assign();           //����ֵ������1���ɹ���0��ʧ�ܪ�
void initial();        //��ʼ��������
void count(int m);      //��m��С��
void process();         //��������δ��ʤС��
//---------------------
int main(){
  assign();
  initial();            //��ʼ���ṹ����
  process();            //��������δ��ʤС��
  cout<<"\nthe winner is "<<pivot->code<<endl;
  delete[]pJose;        //�����ṹ������ѿռ�
}//--------------------
void assign(){   //����ֵ
  cout<<"please input the number,begin,count:\n";
  cin>>n>>begin>>m;
  if(n<2){          //С����У��
    cerr<<"bad number of boys\n";
    exit(1);
  }
  if(begin<0){      //��ʼλ��У��
    cerr<<"bad begin position.\n";
    exit(1);
  }
  if(m<1 || m>n){   //��С������У��
    cerr<<"bad interval number.\n";
    exit(1);
  }
}//--------------------
void initial(){     //�����ʼ��
  pJose = new Jose[n];
  for(int i=1; i<=n; i++){
    pJose[i-1].code = i;
    pJose[i-1].next = &pJose[i%n];
    if((i-1)%10==0)          //������и�������
      cout<<endl;
    cout<<setw(4)<<i;
  }
  pCur = &pJose[n+begin-2];  //ָ�������֮ǰһ���
}//--------------------
void count(int m){    //��m��С��
  for(int i=0; i<m; i++){
    pivot = pCur;
    pCur = pivot->next;
  }
}//--------------------
void process(){   //�����ʤ�߾���֮ǰ������С��
  for(int i=1; i<n; i++){
    count(m);                    //��m��С��
    if((i-1)%10==0)              //������и�������
      cout<<endl;
    cout<<setw(4)<<pCur->code;
    pivot->next = pCur->next;    //С������
  }
}//--------------------
