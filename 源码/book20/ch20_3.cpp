//---------------------
//    ch20_3.cpp
//---------------------
#include"listtmp.h"
//---------------------
int main(){
  List<float> floatList;
  for(int i=1; i<7; i++)
    floatList.Add(*new float(i+0.6));

  floatList.PrintList();
  float b=3.6;
  floatList.Remove(b);
  floatList.PrintList();
}//--------------------
