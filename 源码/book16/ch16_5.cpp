//---------------------
//    ch16_5.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Furniture{
public:
  Furniture(){ }
  void SetWeight(int i){ weight =i; }
  int GetWeight(){ return weight; }
protected:
  int weight;
};//-------------------
class Bed : public Furniture{
public:
  Bed(){}
  void Sleep(){ cout<<"Sleeping...\n"; }
};//-------------------
class Sofa : public Furniture{
public:
  Sofa(){}
  void WatchTV(){ cout<<"Watching TV.\n"; }
};//-------------------
class SleeperSofa : public Bed, public Sofa{
public:
  SleeperSofa() :Sofa(), Bed(){ }
  void FoldOut(){ cout<<"Fold out the sofa.\n"; }
};//-------------------
int main(){
  SleeperSofa ss;
  ss.SetWeight(20);        //�������ģ����SetWeight��Ա
  Furniture* pF;
  pF =(Furniture*)&ss;     //�������ģ����Furniture*
  cout<<pF->GetWeight()<<endl;
}//--------------------
