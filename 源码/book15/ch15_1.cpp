//---------------------
//    ch15_1.cpp
//---------------------
#include<iostream>
#include<string>
using namespace std;
//---------------------
class Student{
  static int noOfStudents;  //C++98��׼�治��д��noOfStudents=0;
  char name[40];
public:
  Student(char* pName ="no name"){
    cout<<"create one student\n";
    strncpy(name, pName,40);
    name[39]='\0';
    noOfStudents++;         //��̬��Ա:�����������ѧ��������1
    cout<<noOfStudents<<endl;
  }
 ~Student(){
    cout<<"destruct one student\n";
    noOfStudents--;            //�����������������1
    cout<<noOfStudents<<endl;
  }
  static int number(){          //��̬��Ա����
    return noOfStudents;
  }
};//-------------------
int Student::noOfStudents =0;  //��̬���ݳ�Ա��ʼ��//---------------------
void fn(){
  Student s1;
  Student s2;
  cout<<Student::number()<<endl;  //���þ�̬��Ա��������������}//--------------------
int main(){
  fn();
  cout<<Student::number()<<endl;  //���þ�̬��Ա��������������}//--------------------