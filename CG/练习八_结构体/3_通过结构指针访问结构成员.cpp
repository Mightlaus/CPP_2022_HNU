/*
 * 【问题描述】通过结构指针访问结构成员

【输入形式】一行三个数据用空格隔开
【输出形式】一行三个数据用空格隔开

【样例输入】

DavidMarat 987654321 335
【样例输出】

DavidMarat 987654321 335
【样例说明】无
【评分标准】 通过所有用例
 */

//下面的代码定义了结构指针，通过结构指针来访问结构成员
#include<iostream>
#include<string>
#include  <cstring>

using namespace std;

/*
 * 注意strcpy()用法，给char赋值；
 */
struct Person {
    char name[20];
    unsigned long id;
    float salary;
};

int main() {
    Person pr1;
    string name;
    cin >> name;
    Person *prPtr = &pr1;
    strcpy(pr1.name, name.c_str());
    cin >> prPtr->id;
    cin >> prPtr->salary;
    cout << prPtr->name << "  " << prPtr->id << "  " << prPtr->salary << endl;
}