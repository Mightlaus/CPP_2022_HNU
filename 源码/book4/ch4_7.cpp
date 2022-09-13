//---------------------
//    ch4_7.cpp
//---------------------
#include<iostream>
#include<cmath>  //用到sqrt()
using namespace std;
//---------------------
int main(){
  //输入
  int m;
  cout<<"please input a number:\n";
  cin>>m;

  //处理
  double sqrtm=sqrt(double(m));
  int i;
  for(i=2; i<=sqrtm; i++)
    if(m%i==0)
      break;

  //输出
  if(sqrtm<i)
    cout<<m<<" is prime.\n";
  else
    cout<<m<<" isn't prime.\n";
}//--------------------
