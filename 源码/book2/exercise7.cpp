//---------------------
// exercise7
//---------------------
#include<iostream>
#include<conio.h>
using namespace std;
//---------------------
int add(int x, int W);
//---------------------
int main(){
  cout<<"In main():\n";
  int a, b, c;
  cout<<"Enter two numbers:\n";
  cin>>a>>b;
  cout<<"\nCalling add():\n";
  c = add(a,b);
  cout<<"\nBack in main():\n";
  cout<<"c was set to "<<c<<endl;
  cout<<"\nExiting. . . \n";
  getche();
}//--------------------
int add(int x, int y){
  cout<<"In add(),received "<<x<<" and "<<y<<endl;
  cout<<"and return "<<x+y<<endl;
  return x + y;
}//--------------------

 