//---------------------
//    ch19_13.cpp
//---------------------
#include<fstream>
#include<iostream>
using namespace std;
//---------------------
int main(int argc, char** argv ){
  ifstream in(argv[1]);
  if(in.fail()){
    cerr<<"Error opening the file: "<<argv[1]<<endl;    return 1;
  }
  while(!in.eof())
    cout.put(char(in.get()));
  //in.close();
}//--------------------
