//---------------------
//    ch4_4.cpp
//---------------------
#include<iostream>
#include<iomanip>   //ʹ��setprecision()
#include<cmath>     //ʹ�ø�������abs
using namespace std;
//---------------------
int main(){
  double s=0,x=1;       //��ʼֵ
  long k=1;
  int sign=1;
  while(abs(x)>1e-8){   //��ֵ�ڱȽ�ǰҪ�������ֵ
    s += x;
    k += 2;
    sign *= -1;
    x = sign/double(k); //ǿ��ת��ʹx�õ�������ֵ
  }
  s *= 4;               //��ֵ
  cout<<"the pi is "    //���
      <<fixed<<setprecision(8)<<s<<endl;
}//--------------------
