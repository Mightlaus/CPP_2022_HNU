//---------------------
//    ch12_9.cpp
//---------------------
#include<cstring>  //�õ�strncpy()
using namespace std;
//---------------------
class Student{
public:
  Student(char* pName){
    strncpy(name, pName, sizeof(name));
    name[sizeof(name)-1]='\0';
  }
  Student(){}  //�޲ι��캯��
private:
  char name[20];
};//-------------------
int main(){
  Student noName;          //ok
  Student ss("Jenny");     //ok
}//--------------------
