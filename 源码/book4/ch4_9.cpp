//---------------------
//    ch4_9.cpp
//---------------------
#include<iostream>
#include<iomanip>  //�õ�setw()��setprecision()
#include<cmath>    //�õ�abs(double)
using namespace std;
//---------------------
double f(double x){ return exp(x)/(1+x*x); }   //����e^x/(1+x^2)
const double eps=1e-8;  //����eps�������㾫��
//---------------------
int main(){
  int n=1;     //��ֵ
  double a=0, b=1;
  double h,Tn,T2n,In,I2n;
  h = b-a;
  T2n=I2n=h*(f(a)+f(b))/2;
  In=0;
  while(abs(I2n-In)>=eps){    //�����
    Tn=T2n;
    In=I2n;
    double sigma=0.0;
    for(int k=0; k<n; k++){    //��䲽�����εĺͲ���
      double x=a+(k+0.5)*h;
      sigma+=f(x);
    }
    T2n=(Tn+h*sigma)/2.0;      //�䲽������
    I2n=(4*T2n-Tn)/3.0;        //��������ʽ
    n*=2;      //����
    h/=2;
  }
  cout<<"the integral of f(x) from "<<a<<" to "<<b<<" is \n"
      <<fixed<<setprecision(8)<<setw(10)<<I2n<<endl;    //������
}//--------------------

