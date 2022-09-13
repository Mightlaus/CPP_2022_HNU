//---------------------
//    ch15_4.cpp
//---------------------
#include<iostream>
#include<string>
using namespace std;
//---------------------
class Student{
  static Student* pFirst;
  Student* pNext;
  char name[40];
public:
  Student(char* pName);
 ~Student();
};//-------------------
Student* Student::pFirst =0;
//---------------------
Student::Student(char* pName){
  strncpy(name,pName,sizeof(name));
  name[sizeof(name)-1] ='\0';
  pNext = pFirst;          //每新建一个结点(对象),就将其挂在链首
  pFirst =this;
}//--------------------
Student::~Student(){
  cout<<this->name<<endl;
  if(pFirst==this){       //如果要删除链首结点,则只要链首指针指向下一个
    pFirst=pNext;
    return;
  }
  for(Student* pS=pFirst; pS; pS=pS->pNext)
    if(pS->pNext==this){  //找到时,pS指向当前结点的结点
      pS->pNext=pNext;    //pNext即this->pNext
      return;
    }
}//--------------------
Student* fn(){
  Student* pS = new Student("Jenny");
  Student sb("Jone");
  return pS;
}//--------------------
int main(){
  Student sa("Jamsa");
  Student* sb =fn();
  Student sc("Tracey");
  delete sb;
}//--------------------
