//---------------------
//    ch18_4.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Increase{
public:
  Increase(int x):value(x){}
  Increase& operator++();      //ǰ����
  Increase operator++(int);     //������
  void display(){ cout<<"the value is "<<value<<endl; }
private:
  int value;
};//-------------------
Increase & Increase::operator++(){
  value++;                      //������
  return *this;                 //�ٷ���ԭ����
}//--------------------
Increase Increase::operator++(int){
  Increase temp(*this);         //��ʱ������ԭ�ж���ֵ
  value++;                      //ԭ�ж��������޸�
  return temp;                  //����ԭ�ж���ֵ
}//--------------------
int main(){
  Increase n(20);
  n.display();
  (n++).display();              //��ʾ��ʱ����ֵ
  n.display();                  //��ʾԭ�ж���
  ++n;
  n.display();
  ++(++n);
  n.display();
  (n++)++;                      //�ڶ���������������ʱ�������
  n.display();
}//--------------------
