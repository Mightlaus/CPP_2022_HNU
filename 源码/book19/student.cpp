//---------------------
//    student.cpp
//---------------------
#include"student.h"
#include<iomanip>
#include<iostream>
using namespace std;
//---------------------
void Student::display(ostream& out){
  out<<left<<setw(20)<<pName<<uID<<","     <<right<<setw(4)<<grade;}//--------------------
ostream& operator<<(ostream& out, Student& st){  //²åÈë²Ù×÷·û
  st.display(out);
  out<<endl;
  return out;
}//--------------------
