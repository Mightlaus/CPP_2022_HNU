//---------------------
//    ch18_4.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Increase{
public:
  Increase(int x):value(x){}
  Increase& operator++();      //前增量
  Increase operator++(int);     //后增量
  void display(){ cout<<"the value is "<<value<<endl; }
private:
  int value;
};//-------------------
Increase & Increase::operator++(){
  value++;                      //先增量
  return *this;                 //再返回原对象
}//--------------------
Increase Increase::operator++(int){
  Increase temp(*this);         //临时对象存放原有对象值
  value++;                      //原有对象增量修改
  return temp;                  //返回原有对象值
}//--------------------
int main(){
  Increase n(20);
  n.display();
  (n++).display();              //显示临时对象值
  n.display();                  //显示原有对象
  ++n;
  n.display();
  ++(++n);
  n.display();
  (n++)++;                      //第二次增量操作对临时对象进行
  n.display();
}//--------------------
