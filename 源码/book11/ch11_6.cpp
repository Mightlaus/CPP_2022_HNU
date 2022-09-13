//---------------------
//    ch11_6.cpp
//---------------------
#include"point.h"
#include<iostream>
using namespace std;
//---------------------
bool getInput(double& x, double& y){
  cout<<"Enter x and y:\n";
  cin>>x>>y;
  return x>=0;
}//--------------------
int main(){
  Point p;
  for(double x,y; getInput(x,y); ){  //输入x,y分量,直到x<0
    p.Set(x,y);
    cout<<"angle="<<p.angle()
        <<",radius="<<p.radius()
        <<",x offset="<<p.xOffset()
        <<",y offset="<<p.yOffset()<<endl;  }
}//--------------------
