/*
 * 【问题描述】

    编写以结构体值作为形参的函数，按指定格式打印结构体数组
【输入形式】

    无
【输出形式】

    每行打印结构体数组的一个元素，用空格间隔结构体内部的属性值
【样例输入】

    无
【样例输出】

jone 12345 339
david 13916 449
marit 27519 311
jasen 42876 623
peter 23987 400
yoke 12335 511
【样例说明】

    无
【评分标准】

    编写函数按格式打印结构体数组
 */

#include  <iostream>
using  namespace  std;

struct  Person{
    char  name[20];
    unsigned  long  id;
    float  salary;
};
//  编写以结构体值作为形参的函数，按指定格式打印结构体数组
void print(Person person)
{
    cout<<person.name<<" "<<person.id<<" "<<person.salary<<endl;
}
Person  allone[6]={
        {"jone",12345,339.0},
        {"david",13916,449.0},
        {"marit",27519,311.0},
        {"jasen",42876,623.0},
        {"peter",23987,400.0},
        {"yoke",12335,511.0}
};
int  main()
{
    for (int i = 0; i < 6; ++i) {
        print(allone[i]);
    }

}