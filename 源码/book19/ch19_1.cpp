//---------------------
//    ch19_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void fn(int a, int b){
  if(b==0)
    cerr<<"zero encountered. "
        <<"The message cannot be redirected\n";
  else
    cout<<a/b<<endl;
}//--------------------
int main(){
  fn(20,2);
  fn(20,0);
}//--------------------
