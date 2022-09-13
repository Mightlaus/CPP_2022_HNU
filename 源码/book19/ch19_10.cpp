//---------------------
//    ch19_10.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int main(){
  char str[128];
  cout<<"Type in a line of text and press Enter"<<endl;
  cin.getline(str, sizeof(str), 'X');
  cout<<"First line: "<<str<<endl;
  cin.getline(str, sizeof(str));
  cout<<"Second line: "<<str;
}//--------------------
