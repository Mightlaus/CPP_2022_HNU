//---------------------
//    ch12_4.cpp
//---------------------
#include<iostream>
#include<cstring>   //�õ�strncpy()
using namespace std;
//---------------------
class Student{
public:
  Student(char* pName){
    cout<<"constructing student "<<pName<<endl;    strncpy(name, pName, sizeof(name));    name[sizeof(name)-1]='\0'; //��ֹ���ֹ���������
  }
 ~Student(){
    cout<<"destructing "<<name<<endl;
  }
  //����������Ա��
private:
  char name[20];
};//-------------------
int main(){
  Student ss("Jenny");
}//--------------------
