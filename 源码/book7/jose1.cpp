//---------------------
//    Josephus����ⷨ1
//    jose1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  const int num=10;         //С����
  int a[num];               //����С������
  for(int i=0; i<num; i++)  //��С�����
    a[i]=i+1;
  cout<<"please input the interval: ";    //������С����һ��
  int interval;             
  cin>>interval;            //������һ�ֵļ����
  for(int i=0; i<num; i++)  //���ȫ��С�����
    cout<<a[i]<<",";
  cout<<endl;

  int i=-1;     //�����±�(��һ��ֵ0���ǵ�һ��С�����±�)
  for(int k=1; 1; k++){     //�����num-1��
    for(int j=0; j<interval; ){  //��Ȧ����һ��С��
      i=(i+1)%num;       //���±��1��ģ
      if(a[i]!=0)        //�����Ԫ�ص�С����Ȧ�У������������Ч
        j++;
    }
    if(k==num) break;
    cout<<a[i]<<",";   //����뿪��С��֮���
    a[i]=0;            //��ʶ��С�����뿪
  }
  cout<<"\nNo."<<a[i]<<" boy've won.\n";    //���ʤ����
}//--------------------
