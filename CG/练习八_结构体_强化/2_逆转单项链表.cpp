/*已知head指向一个带头结点的单向链表，链表中每个结点包含数据long和指向本结构结点的指针。编写函数实现如下图所示的逆置。原链表为：

C++程序设计教程第3版.jpg

        逆置后的链表为：

C++程序设计教程第3版.jpg

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

成功逆转链表
 */

#include  <iostream>

using namespace std;

typedef struct LNode *PtrToLNode;
struct LNode {
    long data;
    PtrToLNode next;
};

//  逆转单向链表函数
void reverseList(PtrToLNode head) {
    //begin
    PtrToLNode prevNode=head->next, curNode = head->next->next;
    prevNode->next = NULL; // a指向空
    while (1) {
        if (curNode->next == NULL) {
            head->next = curNode;
            break;
        }

        // 反指
        PtrToLNode tmp = curNode->next;
        curNode->next = prevNode;

        // 下一个迭代
        prevNode = curNode;
        curNode = tmp;
    }


    //end
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
    long data[8] = {10, 45, 895, 371, 908, 425, -484, 0};
    int arrSize = sizeof(data) / sizeof(data[0]);
    //  将数组  data  创建带头结点的为一个单向链表
    PtrToLNode head, p, tail;
    head = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p->data = data[i];
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    //  逆置单向链表
    reverseList(head);
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