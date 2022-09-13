//---------------------
//    ch19_3.cpp
//---------------------
#include<iostream>
#include<strstrea>
using namespace std;
//---------------------
char* parseString(char* pString){
  istrstream inp(pString);      //ios::in方式,读到Null结束
  int aNumber;
  float balance;
  inp>>aNumber>>balance;          //从串流中读入一个整数和浮点数    char* pBuffer =new char[128];
  ostrstream outp(pBuffer,128);   //ios::out方式,字串长度128
  outp<<"a Number = "<<aNumber    //写入pBuffer中      <<", balance = "<<balance;
  return pBuffer;
}//--------------------
int main(){
  char* str ="1234 100.35";
  char* pBuf =parseString(str);
  cout<<pBuf<<endl;
  delete[] pBuf;
}//--------------------
