//*********************
// ch19_16.prj
//*********************
ch19_16.cpp
student.cpp
master.cpp
//*********************

//---------------------
//    ch19_16.cpp
//---------------------
#include"student.h"
#include"master.h"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//---------------------
int main(){
  ifstream fin("e:\\bctemp\\abc.txt");
  char sFirst[10];
  char sLast[10];
  unsigned int uid;
  float nGrade;
  char type;
  char name[20];
  Student* pS;
  for(int i=0; fin>>sLast>>sFirst>>uid>>nGrade>>type; name[0]=0){ //∑¥∏¥ ‰»Î∑¥∏¥÷√nameø’¥Æ
    strcpy(name,strcat(sLast," "));
    strcpy(name,strcat(name,sFirst));
    pS = new MasterStudent(name,uid,nGrade,type);
    cout<<"student #"<<++i<<":"<<*pS;    delete pS;
  }
}//--------------------