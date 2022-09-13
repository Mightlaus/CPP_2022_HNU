//******************************
//**    Josephus����ⷨ��    **
//**    jose6.cpp             **
//******************************����

#include <iostream>
#include <iomanip>
#include <classlib\listimp>

void Display(int);
void Step(int m);
int* Init(int);

TIListImp<int> josephus;                  //������������ģ�����ȫ�ֶ���
TIListIteratorImp<int> iter(josephus);    //����josephus��������
int* curpos;                              //��ǰС��λ��

void main()
{
  int n=10, s=4, m=4;                 //��ȡ�������������
  int* ap=Init(n);
  Step(s);
  for(int i=1; i<n; i++){
    Step(m);
    Display(*curpos);
    josephus.Detach(curpos);
  }
  cout <<"\nThe winner is "<<*iter.Current() << endl;  delete[]ap;
}

//�����ǹ���������ʼ��С����ŵĺ���
int* Init(int n)
{
  int* a = new int[n];
  for(int i=0; i<n; i++){
    a[i] = n - i;
    Display(i+1);
    josephus.Add(&a[i]);
  }
  Display ( -1 );
  iter.Restart();           //��ʼ����������
  return a;
}

//��������ʾһ��С����ŵĺ���
void Display(int n)
{
  static int k;
  if(n<0){
    k = 0;
    cout <<endl;
    return;
  }
  cout <<setw(4) <<n;
  if (!(++k%10))
    cout <<endl;
}

//������Ҫ��ָ��ӵ�ǰλ��Ų����������m��С����λ��
void Step(int m)
{
  for(int i=0; i<m; i++){
    curpos = iter.Current();
    iter++;
    if(!iter.Current())    //ģ�⻷�������
      iter.Restart();
  }
}