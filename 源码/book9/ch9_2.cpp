//---------------------
//    ch9_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  int intOne = 5;
  int& rInt=intOne;

  cout<<"intOne:"<<intOne<<endl;
  cout<<"rInt:"<<rInt<<endl;

  cout<<"&intOne:"<<&intOne<<endl;
  cout<<"&rInt:"<<&rInt<<endl;
}//--------------------