//---------------------
//    master.cpp
//---------------------
#include"master.h"
#include<iostream.h>
using namespace std;
//---------------------
void MasterStudent::display(ostream& out){
  Student::display(out);
  out<<", "<<type;
}//--------------------
