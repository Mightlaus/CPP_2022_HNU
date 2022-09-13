//---------------------
//    ch8_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  int iCount =18;
  int* iPtr=&iCount;
  *iPtr=58;

  cout<<iCount<<endl;
  cout<<iPtr<<endl;
  cout<<&iCount<<endl;  //与iPtr值相同
  cout<<*iPtr<<endl;    //与iCount值相同
  cout<<&iPtr<<endl;    //指针本身的地址
}//--------------------
