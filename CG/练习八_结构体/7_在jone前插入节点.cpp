/*
 * 【问题描述】

已知head指向一个带头结点的单向链表，链表中每个结点包含字符串数据和指向本结构结点的指针。编写函数实现在值为“jone”的结点前插入值为输入值的结点，若没有值为“jone”的结点，则插在链表最后。

【输入形式】

两行字符串

第一行字符串是初始化的链表数据，以空格为间隔，长度为5；

第二行字符串为表示待插入的name。
【输出形式】

有序输出链表
【样例输入】

test1 test2 jone jay jj
marit
【样例输出】

test1 test2 marit jone jay jj
 */

#include  <iostream>
using  namespace  std;

struct  Student{
    string  name;
    Student*  next;
};

void  addStudent(Student*  head,  Student*  s)  {
    //  编写函数实现题目所描述的功能
    Student *thisStu = head;

    while(thisStu->next){
        if(thisStu->next->name == "jone"){
            break;
        }
        thisStu = thisStu->next;
    }

    if(!(thisStu->next)){
        thisStu->next = s;
    }else{
        s->next = thisStu->next;
        thisStu->next = s;
    }

}

int  main(){
    Student*  head  =  new  Student;
    head->next  =  nullptr;
    head->name  =  "";
    Student*  pre  =  head;
    for  (int  i  =  0;  i  <  5;  i++)  {
        Student*  s  =  new  Student;
        string  temp;
        cin  >>  temp;
        s->name  =  temp;
        s->next  =  nullptr;
        pre->next  =  s;
        pre  =  s;
    }

    string  name;
    cin  >>  name;
    Student*  s  =  new  Student;
    s->name  =  name;
    s->next  =  nullptr;
    addStudent(head, s); // fill in the blank

    for(Student*  p  =  head->next;  p;  p  =  p->next)    {        //    循环输出
        cout<<  p->name  <<  "  ";
    }

    return  0;
}