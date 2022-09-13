//---------------------
//    ch11_5.cpp
//---------------------
#include<iostream>
#include<cmath>
using namespace std;
//---------------------
class Point{
public:
  void Set(double ix,double iy){    //��������
    x=ix;  y=iy;
  }
  double xOffset(){             //ȡy���������
    return x;
  }
  double yOffset(){      //ȡx���������
    return y;
  }
  double angle(){        //ȡ��ļ�����
    return (180/3.14159)*atan2(y,x);
  }
  double radius(){        //ȡ��ļ�����뾶
    return sqrt(x*x+y*y);
  }
protected:
  double x;      //x�����
  double y;      //y�����
};//-------------------
bool getInput(double& x, double& y){
  cout<<"Enter x and y:\n";
  cin>>x>>y;
  return x>=0;
}//--------------------
int main(){
  Point p;
  for(double x,y; getInput(x,y); ){    //�ظ�����x��y�������ֱ��x����ֵС��0
    p.Set(x,y);
    cout<<"angle="<<p.angle()
        <<",radius="<<p.radius()
        <<",x offset="<<p.xOffset()
        <<",y offset="<<p.yOffset()<<endl;
  }
}//--------------------
