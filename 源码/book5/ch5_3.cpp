//---------------------
//    ch5_3.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int isnumber(char);    //��������
//---------------------
int main(){
  char c;
  while((c=cin.get())!='\n')
    if( isnumber(c) )      //����һ��С����
      cout <<"you entered a digit\n";
    else
      cout <<"you entered a non_digit\n";
}//--------------------
int isnumber(char ch){    //��������
  return (ch>='0' && ch<='9')? 1:0;
}//--------------------