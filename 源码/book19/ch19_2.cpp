//---------------------
//    ch19_2.cpp
//---------------------
#include<fstream>
using namespace std;
//---------------------
void fn(){
  ofstream myf("c:\\bctemp\\myname"); //Ĭ��ios::out|ios::trunc��ʽ
  myf<<"In each of the following questions, a related pair\n"
     <<"of words or phrases is followed by five lettered pairs\n"     <<"of words or phrases.\n";
}//--------------------
int main(){
  fn();
}//--------------------
