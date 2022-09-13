//---------------------
//    point.h
//---------------------
#include<cmath>  //�õ�atan2(),sqrt(),sin(),cos()
using namespace std;
//---------------------
class Point{
public:
  void Set(double ix,double iy){ //�ӿ�
    a = atan2(iy,ix);
    r = sqrt(ix*ix+iy*iy);
  }
  double xOffset(){              //�ӿ�
    return r * cos(a);
  }
  double yOffset(){              //�ӿ�
    return r * sin(a);
  }
  double angle(){                //�ӿ�
    return (180/3.14159)*a;
  }
  double radius(){               //�ӿ�
    return r;
  }
protected:
  double a;
  double r;
};//-------------------