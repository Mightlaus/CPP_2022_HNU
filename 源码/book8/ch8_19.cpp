//---------------------
//    ch8_19.cpp
//---------------------
#include<iostream>
#include<string.h>  //”√µΩstrcmp()
using namespace std;
//---------------------
int main(){
  char buffer1[10]="hello";
  char buffer2[10]="hello";

  if(strcmp(buffer1,buffer2)==0)
    cout<<"equal\n";
  else
    cout<<"not equal\n";
}//--------------------
