/*
 * 【问题描述】对结构变量赋值
【输入形式】一行三个数据用空格隔开

【输出形式】一行三个数据用空格隔开
【样例输入】

Frank 12345678 3.35
【样例输出】

Frank 12345678 3.35
【样例说明】无
【评分标准】 通过所有测试样例


 */

//下面的程序对结构变量赋值
#include<iostream>
using  namespace  std;

struct  Person{
    char  name[20];
    unsigned  long  id;
    float  salary;
};

Person  pr1;

int  main(){
    Person p;
    cin>>p.name>>p.id>>p.salary;
    cout<<p.name<<" "<<p.id<<" "<<p.salary;

}