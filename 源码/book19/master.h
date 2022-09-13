//---------------------
//    master.h
//---------------------
#include"student.h"
#include<iostream>
using namespace std;
//---------------------
class MasterStudent: public Student{    //Ë¶Ê¿ÉúÀà
  char type;
public:
  MasterStudent(char* pS, unsigned num, float g, char t)
    :Student(pS,num,g),type(t){}
  void display(ostream& out);
};//-------------------
