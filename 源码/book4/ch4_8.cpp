//---------------------
//    ch4_8.cpp
//---------------------
#include<iostream>
#include<iomanip>
#include<cmath>    //�õ�sqrt(double)
using namespace std;
//---------------------
int main(){
  int a,b,l=0;
  cout<<"please input two numbers:\n";
  cin>>a>>b;

  cout<<"primes from "<<a<<" to "<<b<<" is:\n";
  if(a%2==0)    //����Ψһ��һ��ż������,������1
    a++;

  for(long m=a; m<=b; m+=2){   //����Ϊ2
    int sqrtm=sqrt(double(m));
    int i;
    for(i=2; i<=sqrtm; i++)    //��������
      if(m%i==0)
        break;
    //���
    if(i>sqrtm){    //����
      if(l++%10==0)
        cout<<endl;
      cout<<setw(5)<<m;
    }
  }
}//--------------------
