//---------------------
//    ch10_9.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
Person GetPerson(){
  Person temp;
  cout<<"Please enter a name for one person:\n";
  cin>>temp.name;
  cout<<"Please enter one's id number and his salary:\n";
  cin>>temp.id>>temp.salary;
  return temp;
}//--------------------
void Print(Person& p){
  cout<<p.name<<"    "
      <<p.id<<"    "
      <<p.salary<<endl;
}//--------------------
int main(){
  Person employee[3];
  for(int i=0; i<3; i++){
    employee[i] = GetPerson();
    Print(employee[i]);
  }
}//--------------------
