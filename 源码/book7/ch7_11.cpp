//---------------------
//    ch7_11.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void qsort(int[],int,int);
//---------------------
int main(){
  int array[]={55,2,6,4,11,12,9,73,26,37};
  int len=sizeof(array)/sizeof(int);
  for(int i=0; i<len; i++)    //ԭʼ˳�����
    cout<<array[i]<<",";
  cout<<"\n\n";

  qsort(array,0,len-1);       //����������

  for(int i=0; i<len; i++)    //���������
    cout<<array[i]<<",";
  cout<<endl;
}//--------------------
void qsort(int a[], int left, int right){    //��������
  int pivot=a[right],l=left,r=right,temp;
  while(l<r){
    temp=a[l], a[l]=a[r], a[r]=temp;  //����
    while(l<r && a[r]>pivot) --r;
    while(l<r && a[l]<=pivot) ++l;
  }
  temp=a[left], a[left]=a[r], a[r]=temp;  //ʹ��a[r]��Ϊ�ֽ�Ԫ
  if(left<r-1) qsort(a,left,r-1);
  if(r+1<right) qsort(a,r+1,right);
}//--------------------