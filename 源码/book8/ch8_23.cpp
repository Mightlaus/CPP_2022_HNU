//---------------------
//    ch8_23.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(int argc, char* argv[]){
  int i=0;
  while(*argv)
    cout<<"arg "<<i++<<": "<<*argv++<<endl;
}//--------------------
