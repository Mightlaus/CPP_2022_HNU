//---------------------
//    ch10_10.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
void GetPerson(Person& p){    //�ṹ�������ô��ݵĺ���
  cout<<"Please enter a name for one person:\n";
  cin>>p.name;
  cout<<"Please enter one's id number and his salary:\n";
  cin>>p.id >>p.salary;
}//--------------------
void Print(Person& p){
  cout<<p.name<<"    "
      <<p.id<<"    "
      <<p.salary<<endl;
}//--------------------
int main(){
  Person employee[3];
  for(int i=0; i<3; i++){
    GetPerson(employee[i]);  //���ú�,employee[i]����ֵ
    Print(employee[i]);
  }
}//--------------------
