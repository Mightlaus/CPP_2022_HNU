//---------------------
//    ch12_9.cpp
//---------------------
#include<cstring>  //用到strncpy()
using namespace std;
//---------------------
class Student{
public:
  Student(char* pName){
    strncpy(name, pName, sizeof(name));
    name[sizeof(name)-1]='\0';
  }
  Student(){}  //无参构造函数
private:
  char name[20];
};//-------------------
int main(){
  Student noName;          //ok
  Student ss("Jenny");     //ok
}//--------------------
