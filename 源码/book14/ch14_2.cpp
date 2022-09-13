//---------------------
//    ch14_2.cpp
//---------------------
#include<iostream>
#include<cstring>  //”√µΩstrncpy(), strcat()
using namespace std;
//---------------------
class Student{
  char name[40];
public:
  Student(char* pName="no name"){
    cout<<"Constructing new student "<<pName<<endl;    strncpy(name,pName,sizeof(name));
    name[sizeof(name)-1]='\0';
  }
  Student(Student& s){
    cout<<"Constructing copy of "<<s.name<<endl;    strcpy(name,"copy of ");
    strcat(name,s.name);
  }
 ~Student(){
    cout<<"Destructing "<<name<<endl;
  }
};//-------------------
class Tutor{
  Student student;
public:
  Tutor(Student& s):student(s){
    cout<<"Constructing tutor\n";
  }
};//-------------------
void fn(Tutor tutor){
  cout<<"In function fn()\n";
}//--------------------
int main(){
  Student randy("Randy");
  Tutor tutor(randy);
  cout<<"Calling fn()\n";
  fn(tutor);
  cout<<"Returned from fn()\n";
}//--------------------
