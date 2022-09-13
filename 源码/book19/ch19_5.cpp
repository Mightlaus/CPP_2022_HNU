//---------------------
//    ch19_5.cpp
//---------------------
#include<iostream>
#include<iomanip>
using namespace std;
//---------------------
void fn(float interest, float amount){
  cout<<"RMB amount = "
      <<setprecision(2) <<amount;
  cout<<"\nthe interest = "
      <<setprecision(4) <<interest<<endl;
}//--------------------
int main(){
  float f1 =29.41560067;
  float f2 =12.567188;
  fn(f1,f2);
}//--------------------
