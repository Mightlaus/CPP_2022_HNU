//---------------------
//    ch4_7.cpp
//---------------------
#include<iostream>
#include<cmath>  //�õ�sqrt()
using namespace std;
//---------------------
int main(){
  //����
  int m;
  cout<<"please input a number:\n";
  cin>>m;

  //����
  double sqrtm=sqrt(double(m));
  int i;
  for(i=2; i<=sqrtm; i++)
    if(m%i==0)
      break;

  //���
  if(sqrtm<i)
    cout<<m<<" is prime.\n";
  else
    cout<<m<<" isn't prime.\n";
}//--------------------
