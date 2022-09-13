//---------------------
//    ch10_6.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
Person allone[6]={{"jone",  12345, 339.0},
                  {"david", 13916, 449.0},
                  {"marit", 27519, 311.0},
                  {"jasen", 42876, 623.0},
                  {"peter", 23987, 400.0},
                  {"yoke",  12335, 511.0}};
//---------------------
int main(){
  Person* pA[6]={&allone[0], &allone[1], &allone[2],
                 &allone[3], &allone[4], &allone[5]};
  for(int i=1; i<6; i++)
  for(int j=0; j<=5-i; j++)
    if(pA[j]->salary > pA[j+1]->salary) //比较工资成员
    {
      Person tmp=pA[j];
      pA[j]=pA[j+1];
      pA[j+1]=tmp;
    }
  for(int k=0; k<6; k++)
    cout<<pA[k]->name<<"    "
        <<pA[k]->id<<"    "
        <<pA[k]->salary<<endl;
}//--------------------
