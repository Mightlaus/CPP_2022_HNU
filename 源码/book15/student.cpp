//---------------------
//    student.cpp
//---------------------
#include"student.h"
#include<iostream>
#include<string>
using namespace std;
//---------------------int Student::noOfStudents = 0; //在此分配空间和初始化//---------------------
Student::Student(char* pName){
  cout<<"create one student\n";
  strncpy(name, pName, 40);
  name[39] = '\0';
  noOfStudents++;              //创建对象伴随学生人数增1
  cout<<noOfStudents<<endl;
}//--------------------
Student::~Student(){
  cout<<"destruct one student\n";
  noOfStudents--;              //析构对象伴随学生人数减1
  cout<<noOfStudents<<endl;
}//--------------------
int Student::number(){         //静态成员函数
  return noOfStudents;
}//--------------------
