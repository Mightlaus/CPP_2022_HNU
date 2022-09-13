//---------------------
//    ch9_3.cpp
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

  int intTwo=8;
  rInt=intTwo;
  cout<<"intOne:"<<intOne<<endl;
  cout<<"intTwo:"<<intTwo<<endl;
  cout<<"rInt:"<<rInt<<endl;

  cout<<"&intOne:"<<&intOne<<endl;
  cout<<"&intTwo:"<<&intTwo<<endl;
  cout<<"&rInt:"<<&rInt<<endl;
}//--------------------