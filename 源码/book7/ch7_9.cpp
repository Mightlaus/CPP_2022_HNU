//---------------------
//    ch7_9.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void bubble(int[], int);
//---------------------
int main(){
  int array[]={55,2,6,4,32,12,9,73,26,37};
  int len=sizeof(array)/sizeof(int); //����Ԫ�ظ���
  for(int i=0; i<len; i++)           //ԭʼ˳�����
    cout<<array[i]<<",";
  cout<<"\n\n";

  bubble(array, len);                //�����Զ���������
}//--------------------
void bubble(int a[], int size){       //ð������
  for(int pass=1; pass<size; pass++){ //���Ƚ�size-1��
    for(int i=0; i<size-pass; i++)     //�Ƚ�һ��
      if(a[i]>a[i+1]){
        int temp=a[i];                 //����Ԫ��
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    for(int i=0; i<size; i++)           //�Ƚ�һ�ֺ����
      cout<<a[i]<<",";
    cout<<endl;
  }
}//--------------------
