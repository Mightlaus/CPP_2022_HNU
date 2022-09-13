//---------------------
//    ch18_5.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Increase{
public:
  Increase(int x):value(x){}
  friend Increase& operator++(Increase& );     //前增量  friend Increase operator++(Increase&,int);    //后增量  void display(){ cout<<"the value is "<<value<<endl; }
private:
  int value;
};//-------------------
Increase & operator++(Increase & a){  a.value++;                           //前增量
  return a;                            //再返回原对象
}//--------------------
Increase operator++(Increase& a, int){  Increase temp(a);                //通过拷贝构造函数保存原有对象值
  a.value++;                       //原有对象增量修改
  return temp;                     //返回原有对象值
}//--------------------
int main(){
  Increase n(20);
  n.display();
  (n++).display();                 //显示临时对象值
  n.display();                     //显示原有对象
  ++n;
  n.display();
  ++(++n);
  n.display();
  (n++)++;                         //第二次增量操作对临时对象进行
  n.display();
  cin.get();
}//--------------------
