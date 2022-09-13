//---------------------
//    ch19_8.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  for(int n=1; n<=7; n++){
    for(int k=1; k<=n; k++)
      cout<<" ";
    for(int k=1; k<=15-2*n; k++)
      cout<<"m";
    cout<<endl;
  }
}//--------------------
