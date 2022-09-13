//*********************
// Josephus问题解法五
// jose4.prj
//*********************
//ringx.cpp     //头文件ringx.h中Ring类的实现
//josex.cpp    //头文件josex.h中Jose类的实现
//jose5.cpp    //主函数定义
//*********************

//---------------------
//    jose5.cpp
//---------------------
#include"josex.h"   //告诉编译，本文件中将使用Jose类
#include<iostream>
using namespace std;
//---------------------
int main(){
  Jose jose;     //建立Josephus问题对象
  jose.Initial();
  jose.GetWinner();
}//--------------------
