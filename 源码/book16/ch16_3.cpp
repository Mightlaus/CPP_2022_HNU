//---------------------
// ch16_3.cpp  圆类组合策略
//---------------------
#include<iostream>
using namespace std;
//---------------------
class Point{
protected:
  double x, y;
public:
  Point(double a=0, double b=0):x(a),y(b){}
  double xOffset()const{ return x; }
  double yOffset()const{ return y; }
  void moveTo(double a, double b){ x = a, y = b; }
  void print(){ cout<<"("<<x<<","<<y<<")\n"; }
};//-------------------
class Circle{   //圆-组合类
  Point point;
  double radius;
public:
  Circle(const Point& p, double r):point(p),radius(r){}
  double getRadius()const{ return radius; }
  Point getPoint()const{ return point; }
  double getArea()const{ return radius * radius * 3.14; }
  double getCircum()const{ return 2 * radius * 3.14; }
  void moveTo(double a, double b){ point.moveTo(a, b); }
  void modifyRadius(double r){ radius = r; }
};//-------------------
int main(){
  Point a(2.3, 5.6);
  Circle c(a, 7);
  c.moveTo(1, 2);
  c.modifyRadius(3);
  Point q = c.getPoint();
  cout<<"radius: "<<c.getRadius()<<"\n";
  cout<<"point: ";
  q.print();
  cout<<"area: "<<c.getArea()<<"\n";
  cout<<"circum: "<<c.getCircum()<<"\n";
}//---------------------

 