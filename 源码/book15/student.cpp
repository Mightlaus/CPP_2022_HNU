//---------------------
//    student.cpp
//---------------------
#include"student.h"
#include<iostream>
#include<string>
using namespace std;
//---------------------int Student::noOfStudents = 0; //�ڴ˷���ռ�ͳ�ʼ��//---------------------
Student::Student(char* pName){
  cout<<"create one student\n";
  strncpy(name, pName, 40);
  name[39] = '\0';
  noOfStudents++;              //�����������ѧ��������1
  cout<<noOfStudents<<endl;
}//--------------------
Student::~Student(){
  cout<<"destruct one student\n";
  noOfStudents--;              //�����������ѧ��������1
  cout<<noOfStudents<<endl;
}//--------------------
int Student::number(){         //��̬��Ա����
  return noOfStudents;
}//--------------------
