//---------------------
//    ch15_5.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Student{
  char name[40];
  static int noOfStudents;
public:
  static int number(){
    return noOfStudents;
  }
  //...��
};//-------------------
int Student::noOfStudents = 1;//---------------------
int main(){
  Student s;
  cout<<s.number()<<endl;          //ok �ö������þ�̬��Ա����  cout<<Student::number()<<endl;   //ok ������������̬��Ա����}//--------------------