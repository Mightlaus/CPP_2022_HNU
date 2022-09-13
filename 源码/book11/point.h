//*******************
//**    point.h    **
//*******************
#include <math.h>
class Point{
public:
  void Set(double ix,double iy)    //接口
  {
    x=ix;  y=iy;
  }

  double xOffset()                 //接口
  {
    return x;
  }

  double yOffset()                 //接口
  {
    return y;
  }

  double angle()                   //接口
  {
    return (180/3.14159)*atan2(y,x);
  }

  double radius()                  //接口
  {
    return sqrt(x*x+y*y);
  }
protected:
  double x;
  double y;
};