//---------------------
//    tdate.h  类定义
//---------------------
#ifndef TDATE
#define TDATE
class Tdate{
public:
  void Set(int,int,int);      //成员函数声明
  int IsLeapYear();
  void Print();
private:
  int month;
  int day;
  int year;
};//-------------------
#endif
