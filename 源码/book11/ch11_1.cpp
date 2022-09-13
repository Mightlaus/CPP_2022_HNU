//---------------------
//    ch11_1.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Tdate{
public:
  void Set(int m,int d,int y){    //置日期值
    month=m; day=d; year=y;
  }
  int IsLeapYear(){               //判是否闰年
    return (year%4==0 && year%100!=0)||(year%400==0);
  }
  void Print(){                   //输出日期值
    cout<<month<<"/"<<day<<"/"<<year<<endl;
  }
private:
  int month;
  int day;
  int year;
};//-------------------
int main(){
  Tdate a;
  a.Set(2,4,1998);
  a.Print();
}//--------------------
