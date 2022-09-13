//---------------------
//    Josephus����ⷨ��
//    jose2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Jose{         //С�����
  int code;
  Jose* next;
};//-------------------
int main(){
  cout<<"please input the number of boys,\n"  //С������
      <<"          interval of counting:\n";  //��С������
  int nBoys,interval;
  cin>>nBoys>>interval;   //����ֵ

  Jose* pJose = new Jose[nBoys];   //�Ӷ��ڴ��ȡС���ṹ����
  for(int i=0; i<nBoys; i++){      //��ʼ���ṹ����:����,���,���
    cout<<(i%10 ? "  ":"\n  ")<<i+1;     //Ԫ�ذ�10��һ�����
    pJose[i].code = i+1;                 //С�����
    pJose[i].next = &pJose[(i+1)%nBoys]; //������һ��Ԫ��
  }
  Jose* pivot;                           //�����ڱ�
  Jose* pCurrent = &pJose[nBoys-1];      //��һ�����������һ��Ԫ��pJose[0]
  for(int items=0; items<nBoys-1; ){     //����δ��ʤ������С��
    for(int j=interval; j--; pCurrent=pCurrent->next)   //��interval��С��
      pivot = pCurrent;
    cout<<(items++%10 ? "  " : "\n  ")<<pCurrent->code; //��ӵ�С��������
    pivot->next = pCurrent->next;    //С������
  }
  cout<<"\n\nthe winner is "<<pivot->code<<endl;     //��ʤ��
  delete[] pJose;      //�����ѿռ�
}//--------------------

