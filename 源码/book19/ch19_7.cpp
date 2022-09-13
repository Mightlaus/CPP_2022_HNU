//---------------------
//    ch19_7.cpp
//---------------------
#include<iostream>
#include<iomanip>
using namespace std;
//---------------------
int main(){
  for(int n=1; n<8; n++)
    cout<<setfill(' ')<<setw(n)<<" "        <<setfill('m')<<setw(15-2*n)<<"m"<<endl;
}//--------------------