//---------------------
//    ch16_7.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class OBJ1{
public:
  OBJ1(){ cout<<"OBJ1\n"; }
};//-------------------
class OBJ2{
public:
  OBJ2(){ cout<<"OBJ2\n"; }
};//-------------------
class B1{
public:
  B1(){ cout<<"Base1\n"; }
};//-------------------
class B2{
public:
  B2(){ cout<<"Base2\n"; }
};//-------------------
class B3{
public:
  B3(){ cout<<"Base3\n"; }
};//-------------------
class B4{
public:
  B4(){ cout<<"Base4\n"; }
};//-------------------
class Derived:public B1,virtual public B2,public B3,virtual public B4{
public:
  Derived():B4(),B3(),B2(),B1(),obj2(),obj1(){
    cout<<"Derived ok.\n";
  }
protected:
  OBJ1 obj1;
  OBJ2 obj2;
};//-------------------
int main(){
  Derived aa;
  cout<<"This is ok.\n";
}//--------------------
