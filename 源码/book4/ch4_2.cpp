//---------------------
//    ch4_2.cpp    
//---------------------
#include<iostream>
usingnamespace std;
//---------------------
int main(){
  int val;
  do{   //ѭ����
    cout<<"please enter a number between 1 and 10\n";
    cin>>val;   //�޸�����
    if(val<1 || val>10)
      cout <<"the number is not between 1 and 10\n";
  }while( val<1 || val>10 );  //��������
  cout<<"you entered a "<<val<<endl;
}//--------------------
