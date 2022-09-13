//---------------------
//    ch21_3.cpp
//---------------------
#include<iostream>
#include<cstring>
#include<exception>
using namespace std;
//---------------------
class String{
  char* p;
  int len;
  static int max;
public:
  String(char*, int);
  class Range{        //在类中定义的异常类1
  public:
    Range(int j):index(j){}
    int index;
  };
  class Size{};       //异常类2
  char& operator[](int k){
    if(k<0 || k>=len)
      throw Range(k);
    return p[k];
  }
};//-------------------
int String::max = 20;  //静态成员初始化
//---------------------
String::String(char* str, int si){
  if(si<0 || max<si)
    throw Size();

  p=new char[si];
  strncpy(p, str, si);
  len=si;
}//--------------------
void g(String& str){
  int num=10;
  for(int n=0; n<num; n++)
    cout<<str[n];
  cout<<endl;
}//--------------------
void f(){
  //代码区1
  try{
    //代码区2
    String s("abcdefghijklmnop", 10);
    g(s);
  }catch(String::Range r){
    cerr<<"->out of range: "<<r.index<<endl;    //代码区3
  }catch(String::Size){
    cerr<<"size illegal!\n";
  }catch(bad_alloc& e){
    cerr<<"bad allocation using new operator.\n";
    exit(1);
  }
  cout<<"The program will be continued here.\n\n";
  //代码区4
}//--------------------
int main(){
  //代码区5
  f();
  cout<<"These code is not effected by probably exception in f().\n";}//--------------------