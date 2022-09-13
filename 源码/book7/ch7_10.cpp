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
  int len=sizeof(array)/sizeof(int);    //元素个数
  for(int i=0; i<len; i++)     //原始顺序输出
    cout<<array[i]<<",";
  cout<<"\n\n";
  isort(array, len);           //调用排序函数
}//--------------------
void isort(int a[], int size){ //插入排序
  for(int i=1; i<size; i++){   //共执行size-1轮
    int ins=a[i],idx=i-1;
    for( ; idx>=0 && ins<a[idx]; idx--)
      a[idx+1]=a[idx];         //后挪一个位置

    a[idx+1]=ins;              //插入

    for(int j=0; j<size; j++)  //比较一轮后输出
      cout<<a[j]<<((j==i)?"  |  ":",");  //'|'为已排未排分界线
    cout<<endl;
  }
}//--------------------