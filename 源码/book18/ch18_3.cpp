//---------------------
//    ch18_3.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class RMB{
public:
  RMB(unsigned int d, unsigned int c);
  RMB operator+(RMB&);
  RMB& operator++();
  void display(){ cout<<(yuan + jf / 100.0)<<endl; }
protected:
  unsigned int yuan;
  unsigned int jf;
};//-------------------
RMB::RMB(unsigned int d, unsigned int c){
  yuan = d + c/100;
  jf = c % 100;
}//--------------------
RMB RMB::operator+(RMB& s){
  unsigned int t = jf+s.jf;
  unsigned int c = t % 100;
  unsigned int d = yuan + s.yuan + t/100;
  return RMB(d,c);
}//--------------------
RMB& RMB::operator++(){
  if(++jf==100)
    jf = 0;
    yuan++;
  }
  return *this;
}//--------------------
int main(){
  RMB d1(1, 60);
  RMB d2(2, 50);
  RMB d3(0, 0);
  d3 = d1 + d2;
  ++d3;
  d3.display();
}//--------------------
