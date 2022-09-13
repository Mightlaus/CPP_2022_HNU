//---------------------
//    ch12_12.cpp
//---------------------
#include<iostream>
#include<cstring>
using namespace std;
//---------------------
class StudentID{
public:
  StudentID(int id=0){
    value=id;
    cout<<"Assigning student id "<<value<<endl;  }
 ~StudentID(){
    cout<<"Destructing id "<<value<<endl;
  }
private:
  int value;
};//-------------------
class Student{
public:
  Student(char* pName="no name",int ssID=0) : id(ssID){
    cout<<"Constructing student "<<pName<<endl;    strncpy(name, pName, sizeof(name));
    name[sizeof(name)-1]='\n';
  }
private:
  char name[20];
  StudentID id;
};//-------------------
int main(){
  Student s("Randy",9818);
  Student t("Jenny");
}//--------------------
