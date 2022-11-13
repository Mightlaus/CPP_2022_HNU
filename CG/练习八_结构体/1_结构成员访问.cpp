/*
 *
【问题描述】定义一个结构体，并在main函数中访问结构成员
【输入形式】一行数据包含两个double类型数据，用空格隔开
【输出形式】两行数据
【样例输入】

30.5 10.1
【样例输出】

Temp=30.5
Wind=10.1
【样例说明】无
【评分标准】 通过所有样例测试
 */

//下面的程序说明了访问结构成员的方法
#include<iostream>
using  namespace  std;

/*
 * cout用法
 * cout输出double时自动抹零，不需要再手动判定了！
 * printf在这里很不好用
 * printf("Temp=%.1f\nWind=%.1f", today.temp, today.wind);
 */
struct  Weather{
    // here
    double temp;
    double wind;
};

int  main(){
    Weather  today;

    //按照题目补全代码
    cin>>today.temp>>today.wind;

    cout<<"Temp="<<today.temp<<endl<<"Wind="<<today.wind;

}