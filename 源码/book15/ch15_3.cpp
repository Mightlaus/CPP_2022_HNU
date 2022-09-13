//---------------------
//    ch15_3.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Student{
public:
  static int noOfStudents;
  Student& nextStudent(){
    noOfStudents++;
    return *this;
  }
  //...ª¤
};//-------------------
int Student::noOfStudents = 0;
//---------------------
void fn(Student& s){
  cout<<s.nextStudent().noOfStudents<<endl;
}//--------------------
int main(){
  Student ss;
  fn(ss);
}//--------------------
