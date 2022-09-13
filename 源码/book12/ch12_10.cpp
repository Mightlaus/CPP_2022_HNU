//---------------------
//    ch12_10.cpp
//---------------------
#include<iostream>
#include<cstring>
using namespace std;
//---------------------
int nextStudentID=0;
//---------------------
class StudentID{
public:
  StudentID(){
    value=++nextStudentID;
    cout<<"Assigning student id "<<value<<endl;  }
 ~StudentID(){
    --nextStudentID;
    cout<<"Destructing id "<<value<<endl;
  }
protected:
  int value;
};//-------------------
class Student{
public:
  Student(char* pName="noName"){
    cout<<"Constructing student "<<pName<<endl;    strncpy(name, pName, sizeof(name));
    name[sizeof(name)-1]='\0';
  }
private:
  char name[20];
  StudentID id;
};//-------------------
int main(){
  Student s("Randy");
}//--------------------
