//---------------------
//    ch12_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Student{
public:
  Student(){
    cout <<"constructing student.\n";
    semesHours=100;
    gpa=3.5;
  }
  //����������Ա
private:
  int semesHours;
  float gpa;
};//-------------------
class Teacher{
public:
  Teacher()  {
    cout <<"constructing teacher.\n";
  }
};//-------------------
class TutorPair{
public:
  TutorPair(){
    cout <<"constructing tutorpair.\n";
    noMeetings=0;
  }
private:
  Student student;
  Teacher teacher;
  int noMeetings;    //�������
};//-------------------
int main(){
  TutorPair tp;
  cout <<"back in main.\n";
}//--------------------
