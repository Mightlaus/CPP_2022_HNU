/*
 * 【问题描述】

请使用结构体数组实现学生平均成绩的计算与输出。

【输入形式】

第一行为整数n，表示有n个学生；

以下n行为 学生姓名 期中成绩 期末成绩，如zhangsan 98.0 97.0
【输出形式】

按输入顺序输出学生的姓名与平均成绩（保留两位小数）
【样例输入】

3
jiang 99 98
lili 80.0 76
res 0 0
【样例输出】

jiang 98.50
lili 78.00
res 0.00
【样例说明】
【评分标准】
 */

#include  <iostream>
#include  <iomanip>
using  namespace  std;

struct  Student{
    string  name;    //  学生姓名
    float  mid_score;    //    期中成绩
    float  end_score;    //  期末成绩
    float  avg_score;    //  期中与期末的平均成绩
};

int  main(){
    int  n;
    cin  >>  n;

    Student ss[n];    //  定义长度为n的结构体数组
    for  (int  i  =  0;  i  <  n;  i++)  {
        cin  >>  ss[i].name;

        cin>>ss[i].mid_score;  //  输入期中成绩
        cin  >>  ss[i].end_score;

        ss[i].avg_score = (ss[i].mid_score+ss[i].end_score)/2.0;    //  计算期中与期末的平均成绩并存储到avg_score中
    }
    for  (int  i  =  0;  i  <  n;  i++)  {
        cout  <<  ss[i].name  <<  "  "  <<  fixed  <<  setprecision(2)  <<  ss[i].avg_score  <<  endl;
    }
}