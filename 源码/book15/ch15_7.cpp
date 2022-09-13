//---------------------
//    ch15_7.cpp
//---------------------
#include<iostream>
#include<cstdlib>   //�õ�memcpy(), exit()
using namespace std;
//---------------------
class Vector{
  int* v;                     //ָ��һ������,��ʾ����
  int sz;                     //Ԫ�ظ���
public:
  Vector(int);
 ~Vector(){ delete[]v; }      //����������ռ䷵��
  Vector(Vector & );
  int Size(){ return sz; }
  void Display();
  int& Elem(int);             //��������Ԫ��
};//-------------------
Vector::Vector(int s){
  if(s<=0){
    cerr<<"bad Vector size.\n";
    exit(1);
  }
  sz=s;
  v = new int[s];             //�Ӷ��з���������������
}//--------------------
int& Vector::Elem(int i){     //���÷��ص�Ŀ���Ƿ���ֵ��������ֵ
  if(i<0||sz<=i){
    cerr<<"Vector index out of range.\n";
    exit(1);
  }
  return v[i];
}//--------------------
Vector::Vector(Vector& vec){
  v = new int[sz=vec.sz];
  memcpy((void*)v,(void*)vec.v,sz*sizeof(int));
}//--------------------
void Vector::Display(){
  for(int i=0; i<sz; i++)
    cout<<v[i]<<" ";
  cout<<endl;
}//--------------------
class Matrix{
  int* m;
  int szl;
  int szr;
public:
  Matrix(int,int);
  Matrix(Matrix & );
  ~Matrix(){ delete[]m; }
  int SizeL(){ return szl; }
  int SizeR(){ return szr; }
  int& Elem(int,int);
};//-------------------
Matrix::Matrix(int i,int j){
  if(i<=0||j<=0){
    cerr<<"bad Matrix size.\n";
    exit(1);
  }
  szl=i;
  szr=j;
  m =new int[i*j];
}//--------------------
Matrix::Matrix(Matrix& mat){
  szl=mat.szl;
  szr=mat.szr;
  m=new int[szl*szr];
  memcpy((void*)m,(void*)mat.m, szl*szr*sizeof(int));
}//--------------------
int& Matrix::Elem(int i,int j){  //���÷���
  if(i<0||szl<=i||j<0||szr<=j){
    cerr<<"Matrix index out of range.\n";
    exit(1);
  }
  return m[i*szr+j];
}//--------------------
Vector Multiply(Matrix& m, Vector& v){  //�������������ͨ����
  if(m.SizeR()!=v.Size()){
    cerr <<"bad multiply Matrix with Vector.\n";
    exit(1);
  }
  Vector r(m.SizeL());       //����һ����Ž���Ŀ�����
  for(int i=0; i<m.SizeL(); i++){
    r.Elem(i)=0;
    for(int j=0; j<m.SizeR(); j++)
      r.Elem(i) +=m.Elem(i,j)*v.Elem(j);
  }
  return r;
}//--------------------
int main(){
  Matrix ma(4,3);
  ma.Elem(0,0)=1;  ma.Elem(0,1)=2;  ma.Elem(0,2)=3;
  ma.Elem(1,0)=0;  ma.Elem(1,1)=1;  ma.Elem(1,2)=2;
  ma.Elem(2,0)=1;  ma.Elem(2,1)=1;  ma.Elem(2,2)=3;
  ma.Elem(3,0)=1;  ma.Elem(3,1)=2;  ma.Elem(3,2)=1;
  Vector ve(3);
  ve.Elem(0)=2;  ve.Elem(1)=1;  ve.Elem(2)=0;
  Vector va =Multiply(ma,ve);
  va.Display();
}//--------------------
