//---------------------
//    ch5_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void func();
void print(int a, int b, int n);
int n=1;    //ȫ�ֱ���
//---------------------
int main(){
  static int a;    // ��̬�ֲ�����
  int b = -10;     // �ֲ�����
  print(a,b,n);
  b+=4;
  func();
  print(a,b,n);
  n+=10;
  func();
}//--------------------
void func(){
  static int a=2;    // ��̬�ֲ�����
  int b=5;           // �ֲ�����
  a+=2;
  n+=12;
  b+=5;
  print(a,b,n);
}//--------------------
void print(int a, int b, int n){
  cout<<"a:"<<a
      <<"  b:"<<b
      <<"  n:"<<n<<endl;
}//--------------------
