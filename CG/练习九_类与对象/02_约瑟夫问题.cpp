/*
 * 【问题描述】

        n 个人（编号从1~n）围成一圈，从第 k 个人开始数数，数到 m 的人出圈，然后继续从未出列的下一个人开始数数，数到 m 的人出圈，重复上述过程，直到圈中仅剩下一人。
【输入形式】

        输入为一行三个正整数，n、k、m。
【输出形式】

        输出为一个正整数，表示最后剩下的人的编号。
【样例输入】

100 1 5
【样例输出】

47
【答题提醒】本题为程序片段题，你需要将程序补充完整。题目为类与对象的应用，构造一个循环链表，你需要完全理解本程序的设计思想。
 */

#include  <iostream>
/*
 * 注意理解好 继续从未出列的下一个人开始数数 的意思。
 * 从他开始就已经数了1个，所以找out的for循环里应该只向前找out-1个
 *
 * 输入2 1 1时不太对，似乎会发生空指针的问题.解决办法如下
 * servant声明即赋值start避免空指针
 * （链表删除操作后）不要释放内存
 */

using namespace std;

class person {
private:
    int no;            /*  人的编号  */
    person *next;      /*  指向相邻的下一个人  */
public:
    person(int num) {
        no = num;
        next = NULL;
    }

    void setNext(person *p) {
        next = p;
    }

    int getNo() {
        return no;
    }

    person *getNext() {
        return next;
    }
};

class cycle {
private:
    person *start;        /*  开始数数的位置  */
    int out;                    /*  数到几出列  */
    int inQueue;            /*  队伍中现有人数  */
public:
    cycle(int num, int from, int whoOut) {
        inQueue = num, out = whoOut;
        person *prv = NULL, *first = NULL;
        for (int i = 1; i <= num; i++) {
            person *p = new person(i);
            if (i == 1)
                first = p;
            if (i == from)
                start = p;
            if (i > 1)
                prv->setNext(p);

            prv = p;
        }
        prv->setNext(first);
    }

    int getInQueue() {
        return inQueue;
    }

    void cnt()      /*  根据题目要求数数，确定出列的人，将该人从圈中剔除  */
    {
        // 数out个, start放到第out个
        person *servant;
        for (int i = 0; i < out-1; ++i) {
            servant = start;
            start = servant->getNext();
        }

        // 删除操作
        servant->setNext(start->getNext());
//        cout << "out: " << start->getNo() << endl;
//        free(start);
        start = servant->getNext();
        inQueue--;
    }

    person *getStart() {
        return start;
    }

    ~cycle() {
        delete start;
    }
};

int main() {
    int n, k, m;      /*  n  圈内人数    k  开始数数  m  可数出列  */
    cin >> n >> k >> m;

    cycle *p = new cycle(n, k, m);

    while (p->getInQueue() > 1)
        p->cnt();

    person *winer = p->getStart();
    cout << winer->getNo() << endl;

    delete p;

    return 0;
}