//---------------------
//    ch12_4.cpp
//---------------------
#include<iostream>
#include<cstring>   //用到strncpy()
using namespace std;
//---------------------
class Student{
public:
  Student(char* pName){
    cout<<"constructing student "<<pName<<endl;    strncpy(name, pName, sizeof(name));    name[sizeof(name)-1]='\0'; //防止名字过长而崩溃
  }
 ~Student(){
    cout<<"destructing "<<name<<endl;
  }
  //其他公共成员
private:
  char name[20];
};//-------------------
int main(){
  Student ss("Jenny");
}//--------------------
