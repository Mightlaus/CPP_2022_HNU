//---------------------
//    ch8_8.cpp
//---------------------
#include<iostream>
#include<cstdlib>  //用到malloc()
using namespace std;
//---------------------
int main(){
  cout<<"please input a number of array:\n";
  int aSize;    //元素个数
  cin>>aSize;
  int* ap = (int*)malloc(aSize*sizeof(int));
  if(ap){
    cout<<"can't allocate more memory, terminating.\n";
    return 1;
  }
  for(int cnt=0; cnt<aSize; cnt++)
    ap[cnt]=cnt*2;
  for(int cnt=0; cnt<aSize; cnt++)
    cout<<ap[cnt]<<"  ";

  cout<<endl;
  free(ap);     //释放堆内存
}//--------------------
