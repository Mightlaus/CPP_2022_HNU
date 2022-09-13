//---------------------
//    ch18_7.cpp
//---------------------
#include<string>
#include<iostream>
using namespace std;
//---------------------
class Name{
public:
  Name(){ pName = 0; }
  Name(char* pn){ copyName(pn); }
  Name(Name & s){ copyName(s.pName); }
  ~Name(){ deleteName(); }
  Name& operator=(Name & s){          //¸³ÖµÔËËã·û
    deleteName();
    copyName(s.pName);
    return *this;
  }
  void display(){ cout<<pName<<endl; }
protected:
  void copyName(char* pN);
  void deleteName();
  char* pName;
};//-------------------
void Name::copyName(char* pN){
  pName = new char[strlen(pN) + 1];
  if(pName)
    strcpy(pName, pN);
}//--------------------
void Name::deleteName(){
  if(pName){
    delete pName;
    pName = 0;
  }
}//--------------------
int main(){
  Name s("claudette");
  Name t("temporary");
  t.display();
  t = s;               //¸³Öµ
  t.display();
}//--------------------
