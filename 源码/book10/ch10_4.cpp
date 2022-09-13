//---------------------
//    ch10_4.cpp
//---------------------
#include<iostream>
#include<string>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
int main(){
  Person pr1;
  Person* prPtr;
  prPtr = &pr1;
  strcpy((*prPtr).name, "David Marat");
  (*prPtr).id = 987654321;
  (*prPtr).salary = 335.0;
  cout<<(*prPtr).name<<"    "
      <<(*prPtr).id<<"    "
      <<(*prPtr).salary<<endl;
}//--------------------