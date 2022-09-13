//---------------------
//    ch8_10.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void mystrcpy(char* dest, const char* source){
  while(*dest++ = *source++);
}//--------------------
int main(){
  char a[20] = "How are you!";
  char b[20];
  mystrcpy(b,a);
  cout<<b<<endl;
}//--------------------
