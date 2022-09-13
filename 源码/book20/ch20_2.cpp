//---------------------
//    ch20_2.cpp
//---------------------
#include<iostream>
#include<cstring>
using namespace std;
//---------------------
template<class T> T max(T a,T b){
  return a>b ? a : b;
}//--------------------
char* max(char* a, char* b){
  return strcmp(a,b)>=0 ? a : b;
}//--------------------
int main(){
  cout<<"Max(\"Hello\",\"Gold\") is "
      << max("Hello","Gold")<<endl;
}//--------------------
