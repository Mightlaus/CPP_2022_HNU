//---------------------
//    ch4_5.cpp
//---------------------
#include<iostream>
#include<cmath>   //�õ�abs()
using namespace std;
//---------------------
int main(){
  double s=0,x=1;   //��ʼֵ
  for(int n=1; abs(x)>1e-8; n++,x*=(-1.0)*(2*n-3)/(2*n-1))
    s += x;

  s*=4;   //��ֵ
  cout<<"the pi is "<<s<<endl;  //���
}//--------------------
