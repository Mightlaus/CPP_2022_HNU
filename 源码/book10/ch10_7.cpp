//---------------------
//    ch10_7.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
void Print(Person pr){
  cout<<pr.name<<"    "
      <<pr.id<<"    "
      <<pr.salary<<endl;
}//--------------------
Person allone[4]={{"jone", 12345, 339.0},
                  {"david", 13916, 449.0},
                  {"marit", 27519, 311.0},
                  {"yoke",  12335, 511.0}};
//---------------------
int main(){
  for(int i=0; i<4; i++)
    Print(allone[i]);
}//--------------------
