//---------------------
//    ch9_11.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
bool circleArea(){
  double* pd = new double;
  if(!pd){
    cout<<"error memory allocation!";
    return true;
  }
  double& rd=*pd;
  cout<<"the radius is: ";
  cin>>rd;
  cout<<"the area of circle is "<<rd*rd*3.14<<endl;
  delete &rd;
  return false;
}//--------------------
int main(){
  if(circleArea())
    cout<<"program failed.\n";
  else
    cout<<"program successed.\n";
}//--------------------
