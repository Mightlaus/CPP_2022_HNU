//---------------------
//    ch7_10.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void isort(int* a, int size);
//---------------------
int main(){
  int array[]={55,2,6,4,32,12,9,73,26,37};
  int len=sizeof(array)/sizeof(int);    //Ԫ�ظ���
  for(int i=0; i<len; i++)     //ԭʼ˳�����
    cout<<array[i]<<",";
  cout<<"\n\n";
  isort(array, len);           //����������
}//--------------------
void isort(int a[], int size){ //��������
  for(int i=1; i<size; i++){   //��ִ��size-1��
    int ins=a[i],idx=i-1;
    for( ; idx>=0 && ins<a[idx]; idx--)
      a[idx+1]=a[idx];         //��Ųһ��λ��

    a[idx+1]=ins;              //����

    for(int j=0; j<size; j++)  //�Ƚ�һ�ֺ����
      cout<<a[j]<<((j==i)?"  |  ":",");  //'|'Ϊ����δ�ŷֽ���
    cout<<endl;
  }
}//--------------------