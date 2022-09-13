//---------------------
//    ch12_5.cpp
//---------------------
#include<iostream>
#include<cstring>   //用到strcpy()
using namespace std;
//---------------------
class Student{
public:
  Student(char* pName, int xHours, float xgpa){
    cout<<"constructing student "<<pName<<endl;    strcpy(name, pName);
    semesHours = xHours;
    gpa = xgpa;
  }
 ~Student(){
    cout<<"destructing "<<name<<endl;
  }
  //其他公共成员
private:
  char name[20];
  int semesHours;
  float gpa;
};//-------------------
int main(){
  Student ss("Jenny",22,3.5);
}//--------------------
