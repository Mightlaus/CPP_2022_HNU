//---------------------
//    master.h
//---------------------
#include"student.h"
#include<iostream>
using namespace std;
//---------------------
class MasterStudent: public Student{    //˶ʿ����
  char type;
public:
  MasterStudent(char* pS, unsigned num, float g, char t)
    :Student(pS,num,g),type(t){}
  void display(ostream& out);
};//-------------------
