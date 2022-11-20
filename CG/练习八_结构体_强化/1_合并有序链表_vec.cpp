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
#include <vector>
#include <algorithm>
/*
 * 这全部都是含有头结点的链表
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

    vector<int> vec;

    for (auto x = head1->next; x; x=x->next){
        vec.push_back(x->data);
    }
    for(auto x=head2->next; x; x=x->next){
        vec.push_back(x->data);
    }

    sort(vec.begin(), vec.end());

    PtrToLNode thisNode = mergedList;
    for(auto x:vec){
        auto node = new LNode{-1, NULL};
        thisNode->next = node;
        thisNode = thisNode->next;
        thisNode->data = x;
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