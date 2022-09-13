//*********************
// ch15_2.prj
//*********************
student.cpp
ch15_2.cpp
//*********************

//---------------------
//    ch15_2.cpp
//---------------------
#include"student.h"    //÷ÿ”√Student¿‡
#include<iostream.h>
using namespace std;
//---------------------
void fn(){
  Student s1;
  Student s2;
  cout<<Student::number()<<endl;
}//--------------------
int main(){
  fn();
  cout<<Student::number()<<endl;
}//--------------------
