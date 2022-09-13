#include<iostream>
using namespace std;
//---------------------
void func();
int n =1;
//---------------------
int main(){
  static int x=5;
  int y=n;
  cout<<"Main--x="<<x
      <<", y="<<y<<"£¬n="<<n<<endl;
  func();
  cout<<"Main--x="<<x
      <<", y="<<y<<"£¬n="<<n<<endl;
  func();
}//--------------------
void func(){
  static int x=4;
  int y=10;
  x += 2;
  n +=10;
  y += n;
  cout<<"Func--x="<<x
      <<", y="<<y<<"£¬n="<<n<<endl;
}//--------------------

 