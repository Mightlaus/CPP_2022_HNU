//*********************
// Josephus问题解法四
// jose4.prj
//*********************
//ring.cpp     //头文件ring.h中Ring类的实现
//josex.cpp    //头文件jose.h中Jose类的实现
//jose4.cpp    //主函数定义
//*********************

//---------------------
//    jose4.cpp
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
