//---------------------
//    ch12_11.cpp
//---------------------
#include<iostream>
#include<cstring>   //�õ�strncpy()
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
  Student(char* pName="noName",int ssID=0){
    cout<<"Constructing student "<<pName<<endl;    strncpy(name, pName, sizeof(name));
    name[sizeof(name)-1]='\0';
    StudentID id(ssID);     //ϣ����ѧ�Ŵ���ѧ�������
  }
private:
  char name[20];
  StudentID id;
};//-------------------
int main(){
  Student s("Randy",9818);
}//--------------------
