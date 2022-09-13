//*********************
// ch19_15.prj
//*********************
//ch19_15.cpp
//student.cpp
//master.cpp
//*********************

//---------------------
//    ch19_15.cpp
//---------------------
#include"student.h"
#include"master.h"
#include<fstream.h>
using namespace std;
//---------------------
int main(){
  ofstream out("e:\\bctemp\\abc.txt");
  Student s1("Dill Arnson", 12567, 3.5);
  MasterStudent s2("Welch Shammas", 12667, 4.1, 'A');
  MasterStudent s3("Portel Braumbel", 12579, 3.8, 'B');
  out<<s1;
  out<<s2;
  out<<s3;
}//--------------------
