//---------------------
//    ch16_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Animal{
public:
  Animal(){}
  void eat(){ cout<<"eat.\n"; }
};//-------------------
class Giraffe : private Animal{
public:
  Giraffe(){}
  void StretchNeck(){ cout<<"stretch neck.\n"; }
  void take(){ eat(); }      //ok
};//-------------------
void Func(Giraffe & an){
  an.take();
}//--------------------
int main(){
  Giraffe gir;
  gir.StretchNeck();
  Func(gir);    //ok
}//--------------------
