/*
 * 【问题描述】

    定义两个同种单向链表（结点中包含一个整型数和一个指向本结点类型的指针），这两个链表中数据都已按升序排序，编写函数，合并这两个链表，使合并后的链表仍然有序。

【输入形式】

    无
【输出形式】

    无
【样例输入】

    无
【样例输出】

    无
【样例说明】

    无
【评分标准】

    编写函数升序合并有序链表
 */
#include  <iostream>
/*
 * 这全部都是含有头结点的链表
 * 考虑好新节点在什么时候生成：链表1、2没有到头的时候，并且生成的时候把旧节点next指向新节点
 * 新节点怎么赋值：比较链表1、2当前节点大小，然后把data传入新节点data，更新链表1或2的当前节点
 * 这就需要三个指针，分别指向链表1、2、new的当前节点
 * 结束标志：链表1、2当前节点全为空
 * 注意新增节点后要对当前节点更新：this->next = newNode; this = this->next;
 */
using namespace std;

typedef struct LNode *PtrToLNode;
struct LNode {
    int data;
    PtrToLNode next;
};

PtrToLNode mergeList(PtrToLNode head1, PtrToLNode head2) {
    // begin

    // 先创建新链表的头节点
    auto mergedList = new LNode{0, NULL};

    // 给定三个指针，分别指向待合并链表1，待合并链表2，新链表的当前节点
    PtrToLNode thisNode1=head1->next, thisNode2=head2->next, thisNew=mergedList;


    // 开始判断
    while(thisNode1 || thisNode2){
        // 生成下一个新node放入新链表中
        thisNew->next = new LNode{-11, NULL};
        thisNew = thisNew->next;

        // 如果链表1链表2都还没结束
        if(thisNode1 && thisNode2) {
            if (thisNode1->data < thisNode2->data) {
                thisNew->data = thisNode1->data;
                thisNode1 = thisNode1->next;
            } else {
                thisNew->data = thisNode2->data;
                thisNode2 = thisNode2->next;
            }
        } else if(thisNode1){ //链表2结束
            thisNew->data = thisNode2->data;
            thisNode2 = thisNode2->next;
        } else if(thisNode2){ // 链表1结束
            thisNew->data = thisNode2->data;
            thisNode2 = thisNode2->next;
        } else {
            //全部结束
            break;
        }
    }
    return mergedList;
    // end
}

void printList(PtrToLNode head) {
    PtrToLNode p = head->next;
    while (p != NULL) {
        cout << p->data << "  ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    int data[2][8] = {{-484, 0, 10, 45, 371, 425, 895,  908},
                      {0,    3, 12, 50, 900, 999, 1024, 2048}};
    int arrSize = sizeof(data[0]) / sizeof(data[0][0]);
    //  将数组  data  创建带头结点的为一个单向链表
    PtrToLNode head1, head2, p, tail;
    head1 = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p->data = data[0][i];
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    head2 = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p->data = data[1][i];
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    //  合并有序链表
    PtrToLNode head = mergeList(head1, head2);
    //  顺序打印输出单向链表中各个节点的data数据
    printList(head);
    //  释放链表空间
    while (head->next != NULL) {
        p = head->next;
        head->next = p->next;
        delete p;
    }
    delete head;
    return 0;
}