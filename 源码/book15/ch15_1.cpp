//---------------------
//    ch15_1.cpp
//---------------------
#include<iostream>
#include<string>
using namespace std;
//---------------------
class Student{
  static int noOfStudents;  //C++98标准版不能写成noOfStudents=0;
  char name[40];
public:
  Student(char* pName ="no name"){
    cout<<"create one student\n";
    strncpy(name, pName,40);
    name[39]='\0';
    noOfStudents++;         //静态成员:创建对象伴随学生人数增1
    cout<<noOfStudents<<endl;
  }
 ~Student(){
    cout<<"destruct one student\n";
    noOfStudents--;            //析构对象伴随人数减1
    cout<<noOfStudents<<endl;
  }
  static int number(){          //静态成员函数
    return noOfStudents;
  }
};//-------------------
int Student::noOfStudents =0;  //静态数据成员初始化//---------------------
void fn(){
  Student s1;
  Student s2;
  cout<<Student::number()<<endl;  //调用静态成员函数用类名引导}//--------------------
int main(){
  fn();
  cout<<Student::number()<<endl;  //调用静态成员函数用类名引导}//--------------------