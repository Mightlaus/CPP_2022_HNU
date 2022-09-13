//---------------------
//    student.h
//---------------------
#ifndef STUDENT
#define STUDENT
class Student{
  static int noOfStudents;
  char name[40];
public:
  Student(char* pName ="no name");
 ~Student();
  static int number();     //¾²Ì¬³ÉÔ±º¯Êý
};//-------------------
#endif
