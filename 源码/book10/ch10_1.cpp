//---------------------
//    ch10_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Weather{
  double temp;    //�¶�
  double wind;    //����
};//-------------------
int main(){
  Weather today;
  today.temp=30.5;    //��Ϊ��ֵʹ��
  today.wind=10.1;

  cout<<"Temp="<<today.temp<<endl;  //��Ϊ��ֵʹ��
  cout<<"Wind="<<today.wind<<endl;
}//--------------------
