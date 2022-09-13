//---------------------
//    ch12_7.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Tdate{
public:
  Tdate(){ Init(4,15,1995); }
  Tdate(int d){ Init(4,d,1996); }
  Tdate(int m,int d){ Init(m,d,1997); }
  Tdate(int m,int d,int y){ Init(m,d,y); }
  //其他公共成员
private:
  int month, day, year;
  void Init(int m,int d,int y){
    month=m; day=d; year=y;
    cout<<month<<"/"<<day<<"/"<<year<<endl;  }
};//-------------------
int main(){
  Tdate aday;
  Tdate bday(10);
  Tdate cday(2,12);
  Tdate dday(1,2,1998);
}//--------------------