//---------------------
//    ch10_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
Person pr1={"Frank Voltaire", 12345678, 3.35};
//---------------------
int main(){
  Person pr2;
  pr2=pr1;      //�ṹ�����ĸ�ֵ
  cout<<pr2.name<<"    "
      <<pr2.id<<"    "
      <<pr2.salary<<endl;
}//--------------------