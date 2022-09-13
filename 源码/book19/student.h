//---------------------
//    student.h
//---------------------
#ifndef STUDENT
#define STUDENT
#include<iostream>
#include<cstring>
using namespace std;
//---------------------
class Student{       //大学生类
  char pName[20];
  unsigned int uID;
  float grade;
public:
  Student(char* pS, unsigned num, float g){
    strcpy(pName,pS);
    uID=num;
    grade=g;
  }
  virtual void display(ostream& out);
};//-------------------
ostream& operator<<(ostream& out, Student& st);
#endif
