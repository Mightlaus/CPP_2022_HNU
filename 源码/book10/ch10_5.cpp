//---------------------
//    ch10_5.cpp
//---------------------
#include<iostream>
using namespace std;
//---------------------
struct Person{
  char name[20];
  unsigned long id;
  float salary;
};//-------------------
Person allone[6]={{"jone",   12345, 339.0},
                  {"david", 13916, 449.0},
                  {"marit", 27519, 311.0},
                  {"jasen", 42876, 623.0},
                  {"peter", 23987, 400.0},
                  {"yoke",  12335, 511.0}};
//---------------------
int main(){
  for(int i=1; i<6; i++)      //����
  for(int j=0; j<=5-i; j++)    //һ�ֱȽ�
    if(allone[j].salary > allone[j+1].salary)  //�ȽϹ��ʳ�Ա
    {
      Person tmp = allone[j];     //�ṹ�����Ľ���
      allone[j] = allone[j+1];
      allone[j+1] = tmp;
    }
  for(int k=0; k<6; k++)    //���
    cout<<allone[k].name<<"    "
        <<allone[k].id<<"    "
        <<allone[k].salary<<endl;
}//--------------------

