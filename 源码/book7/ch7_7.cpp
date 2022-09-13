//---------------------
//    ch7_7.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int maximum(int[][4],int,int);
//---------------------
int main(){
  int sg[3][4]={{68,77,73,86},
                {87,96,78,89},
                {90,70,81,86}};
  cout<<"the max grade is "<<maximum(sg,3,4)<<endl;
}//--------------------
int maximum(int grade[][4], int pupils, int tests){
  int max=0;
  for(int i=0; i<pupils; i++)
    for(int j=0; j<tests; j++)
      if(grade[i][j]>max)
        max=grade[i][j];

  return max;
}//--------------------