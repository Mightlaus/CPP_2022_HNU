//---------------------
//    ch12_15.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class A{
public:
  A(int j) : age(j),num(age+1){
    cout<<"age:"<<age<<",num:"<<num<<endl;  }
private:
  int num, age;
};//-------------------
int main(){
  A sa(15);
}//--------------------