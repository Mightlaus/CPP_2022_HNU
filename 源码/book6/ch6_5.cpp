//*********************
// ch6_5.prj
//*********************
ch6_5.cpp
mycircle.cpp
myrect.cpp
//*********************

//---------------------
//    ch6_5.cpp
//    Ö÷º¯Êý
//---------------------
#include"myarea.h"
#include<iostream>
using namespace std;
//---------------------
int main(){
  double width,length;
  cout<<"please enter two numbers:\n";
  cin>>width>>length;

  cout<<"area of rectangle is "<<rect(width,length)<<endl;

  double radius;
  cout<<"please enter a radius:\n";
  cin>>radius;

  cout<<"area of circle is "<<circle(radius)<<endl;
}//--------------------