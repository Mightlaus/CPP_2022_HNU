//---------------------
//    ch16_6.cpp
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
class Bed : virtual public Furniture{
public:
  Bed(){ }
  void Sleep(){ cout<<"Sleeping...\n"; }
};//-------------------
class Sofa : virtual public Furniture{
public:
  Sofa(){ }
  void WatchTV(){ cout<<"Watching TV.\n"; }
};//-------------------
class SleeperSofa : public Bed, public Sofa{
public:
  SleeperSofa() :Sofa(), Bed(){ }
  void FoldOut(){ cout<<"Fold out the sofa.\n"; }
};//-------------------
int main(){
  SleeperSofa ss;
  ss.SetWeight(20);
  cout<<ss.GetWeight()<<endl;
}//--------------------
