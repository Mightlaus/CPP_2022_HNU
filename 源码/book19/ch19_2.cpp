//---------------------
//    ch19_2.cpp
//---------------------
#include<fstream>
using namespace std;
//---------------------
void fn(){
  ofstream myf("c:\\bctemp\\myname"); //Ä¬ÈÏios::out|ios::trunc·½Ê½
  myf<<"In each of the following questions, a related pair\n"
     <<"of words or phrases is followed by five lettered pairs\n"     <<"of words or phrases.\n";
}//--------------------
int main(){
  fn();
}//--------------------
