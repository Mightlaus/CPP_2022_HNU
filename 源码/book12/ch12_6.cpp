//---------------------
//    ch12_6.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Tdate{
public:
  Tdate();
  Tdate(int d);
  Tdate(int m,int d);
  Tdate(int m,int d,int y);
  //其他公共成员
private:
  int month, day, year;
};//-------------------
Tdate::Tdate(){
  month=4; day=15; year=1995;
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
Tdate::Tdate(int d){
  month=4; day=d; year=1996;
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
Tdate::Tdate(int m,int d){
  month=m; day=d; year=1997;
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
Tdate::Tdate(int m,int d,int y){
  month=m; day=d; year=y;
  cout<<month<<"/"<<day<<"/"<<year<<endl;}//--------------------
int main(){
  Tdate aday;
  Tdate bday(10);
  Tdate cday(2,12);
  Tdate dday(1,2,1998);
}//--------------------
