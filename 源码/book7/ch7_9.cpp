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
  int len=sizeof(array)/sizeof(int); //计算元素个数
  for(int i=0; i<len; i++)           //原始顺序输出
    cout<<array[i]<<",";
  cout<<"\n\n";

  bubble(array, len);                //调用自定义排序函数
}//--------------------
void bubble(int a[], int size){       //冒泡排序
  for(int pass=1; pass<size; pass++){ //共比较size-1轮
    for(int i=0; i<size-pass; i++)     //比较一轮
      if(a[i]>a[i+1]){
        int temp=a[i];                 //交换元素
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    for(int i=0; i<size; i++)           //比较一轮后输出
      cout<<a[i]<<",";
    cout<<endl;
  }
}//--------------------
