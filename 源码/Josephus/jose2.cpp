//******************************
//**    Josephus����ⷨ��    **
//**    jose2.cpp             **
//******************************

#include <iostream.h>
#include <iomanip.h>

struct jose         //С�����
{
  int code;
  jose* next;
};

void main()
{
  //����ֵ
  int numOfBoys,interval;
  cout <<"please input the number of boys,\n"  //С������
       <<"          interval of counting:\n";  //��С������
  cin >>numOfBoys >>interval;

  //����С���ṹ����
  jose* pJose=new jose[numOfBoys];    //�Ӷ��ڴ����ռ�
  jose* pCurrent=pJose;    //��ǰ���ָ��

  //��ʼ���ṹ���飺���ɻ�����С����ţ�������
  int itemsInLine=0;    //�������

  for(int i=1; i<=numOfBoys; i++){
    pCurrent->next=pJose+i%numOfBoys;     //������һ��Ԫ��
    pCurrent->code=i;           //С�����
    pCurrent=pCurrent->next;    //�ı䵱ǰλ��
    if(itemsInLine++ % 10==0)
      cout <<endl;
    cout <<setw(4) <<i;
  }      //pCurrent��ʱ����pJose
  itemsInLine=0;

  jose* pivot;      //�����ڱ�
  pCurrent=&pJose[numOfBoys-1];    //��һ�����������һ��Ԫ��pJose[0]

  while(pCurrent->next!=pCurrent){   //����δ��ʤ������С��
    for(int j=0; j<interval; j++){        //��interval��С��
      pivot=pCurrent;
      pCurrent=pivot->next;
    }

    if(itemsInLine++ % 10 == 0)     //���С��
      cout <<endl;
    cout <<setw(4) <<pCurrent->code;
    pivot->next = pCurrent->next;    //С������
    pCurrent=pivot;
  }

  cout <<"\n\nthe winner is "
       <<pCurrent->code <<endl;     //��ʤ��

  delete[]pJose;      //�����ѿռ�
}        //endof main()
