//---------------------
//    ch8_21.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
void print(char*[]);
//---------------------
int main(){
  char* pn[]={"Fred","Barney","Wilma","Betty",NULL};
  print(pn);
}//--------------------
void print(char* arr[]){
  for( ; *arr!=NULL; arr++) //Êä³ö¸÷×Ö·û´®
    cout<<(int)*arr<<"    "<<*arr<<endl;
}//--------------------
