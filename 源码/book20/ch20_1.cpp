//---------------------
//    ch20_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
template<class T>
T max(T a,T b){
  return a > b ? a : b;       //T类的>操作须有定义
}//--------------------
int main(){
  cout<<"Max(3,5) is "<<max(3,5)<<endl;
  cout<<"Max('3','5') is "<< max('3','5')<<endl;
}//--------------------
