//---------------------
//    point.h
//---------------------
#include<cmath>  //用到atan2(),sqrt(),sin(),cos()
using namespace std;
//---------------------
class Point{
public:
  void Set(double ix,double iy){ //接口
    a = atan2(iy,ix);
    r = sqrt(ix*ix+iy*iy);
  }
  double xOffset(){              //接口
    return r * cos(a);
  }
  double yOffset(){              //接口
    return r * sin(a);
  }
  double angle(){                //接口
    return (180/3.14159)*a;
  }
  double radius(){               //接口
    return r;
  }
protected:
  double a;
  double r;
};//-------------------