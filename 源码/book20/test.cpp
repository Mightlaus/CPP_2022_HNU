#include<list>
#include<iostream>
using namespace std;
int main(){
  list<int> aList;
  for(int i=1; i<=7; i++){
    aList.insert(aList.end(), i);
    cout<<" "<<i;
  }
  cout<<"\n";
  list<int>::iterator it=aList.begin();
  for(int i=1; i<=18; i++, ++it){
    if(i==9) aList.erase(it);
    if(it==aList.end())
      ++it;
    cout<<" "<<*it;
  }
  cout<<"\n";
}