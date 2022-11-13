/*
 * 【问题描述】

          学生信息包括学号、姓名(无空格)、性别(M-male  F-female)、分数，输出相关信息，定义学生链表，根据链表输出学生信息。
【输入形式】

         输入学生信息

【输出形式】

         输出学生信息

【样例输入】

54 LiMing f 98
23 Zhou m 67
24 Merry f 85
【样例输出】

54 LiMing Girl 98
23 Zhou Boy 67
24 Merry Girl 85
【样例说明】
【评分标准】
 */

#include  <iostream>
#include  <cstring>
using  namespace  std;
struct  student
{
    int  no;
    char  name[20];
    char  sex;
    float  score;
    student  *next;
};
student *head=nullptr;//链表头指针定义

void  create(int  No,  char  *Name,  char  Sex,  float  Score);
void  show();
int  main()
{
    int  No;
    char  Sex,  Name[20];
    float  Score;
    while(cin>>No>>Name>>Sex>>Score)
    {
        create(No,  Name,  Sex,  Score);
    }
    show();
    return  0;
}

void  create(int  No,  char  *Name,  char  Sex,  float  Score)
{
    student  *newNode;

    newNode = new student;
    newNode->no = No;
    strcpy(newNode->name, Name);
    newNode->sex = Sex;
    newNode->score = Score;
    newNode->next = nullptr;
    //  创建新节点


    if  (head==nullptr)
    {
        head=newNode;
        return;
    }

    auto p_tail = head;
    while(p_tail->next){
        p_tail = p_tail->next;
    }

    p_tail->next = newNode;
    //新节点加入链表
}

void  show()
{
    for(student *p = head; p; p=p->next){
        cout<<p->no<<" "<<p->name<<" ";
        if(p->sex=='m'){
            cout<<"Boy";
        }else{
            cout<<"Girl";
        }
        cout<<" "<<p->score<<endl;
    }
    //  输出

}