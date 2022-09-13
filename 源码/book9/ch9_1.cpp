//---------------------
//    ch9_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  int intOne = 5;
  int& rInt=intOne;

  cout<<"intOne:"<<intOne<<endl;
  cout<<"rInt:"<<rInt<<endl;

  rInt = 7;
  cout<<"intOne:"<<intOne<<endl;
  cout<<"rInt:"<<rInt<<endl;
}//--------------------