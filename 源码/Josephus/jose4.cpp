//*********************
//**    jose4.cpp    **
//*********************

#include "josex.h"   //告诉编译，本文件中将使用Jose类
#include <iostream.h>

void main()
{
  Jose jose;     //建立Josephus问题对象
  jose.Initial();
  jose.GetWinner();
  cin.get();
}
