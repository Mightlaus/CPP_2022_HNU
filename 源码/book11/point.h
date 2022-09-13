//*******************
//**    point.h    **
//*******************
#include <math.h>
class Point{
public:
  void Set(double ix,double iy)    //�ӿ�
  {
    x=ix;  y=iy;
  }

  double xOffset()                 //�ӿ�
  {
    return x;
  }

  double yOffset()                 //�ӿ�
  {
    return y;
  }

  double angle()                   //�ӿ�
  {
    return (180/3.14159)*atan2(y,x);
  }

  double radius()                  //�ӿ�
  {
    return sqrt(x*x+y*y);
  }
protected:
  double x;
  double y;
};