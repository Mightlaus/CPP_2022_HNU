//---------------------
//    ch7_2.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
int array1[5]={1,2,3};
static int array2[5]={1};
//---------------------
int main(){
  int arr1[5] = { 2 };
  static int arr2[5] = { 1, 2 };
  cout<<"global:\n";
  for(int n=0; n<5; n++)
    cout<<" "<<array1[n];

  cout<<"\nglobal static:\n";
  for(int n=0; n<5; n++)
    cout<<"  "<<array2[n];

  cout<<"\nlocal:\n";
  for(int n=0; n<5; n++)
    cout<<"  "<<arr1[n];

  cout<<"\nlocal static:\n";
  for(int n=0; n<5; n++)
    cout<<"  "<<arr2[n];
  cout<<endl;
}//--------------------
