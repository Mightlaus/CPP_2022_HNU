#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * 数据逻辑顺序是链表中的 指针连接次序
 * 结点包含两个部分：
 *   存储数据的数据域
 *   下一个节点的指针域
 */
using namespace std;

class List {
public:
    //创建头结点
    void create_list(){
        head = new Node(0);
    }

    //从头插入一个节点
    void insert(const int &d){
        Node *p = new Node(d);
        p->next = head->next;
        head->next = p;
    }

    // 打印链表
    void print(){
        for(Node *p = head->next; p; p=p->next){
            cout << p->data << endl;
        }
    }

    //在d的位置前插入新d1
    //! todo 插入逻辑没理顺
    void insert_pos(const int &d, const int &d1){
        Node *p = find(d); // 找到d的位置
        Node *q = new Node(d1); // 创建d1 node
        //  d(*p) -> x
        q->next = p->next; // d1(*q) -> x <- d(*p)
        p->next = q; // d(*p) -> d1(*q) -> x
    }

private:
    struct Node {
        int data;
        Node *next;

        // construct 函数
        Node(const int &d) : data(d), next(nullptr) {}
    };

    Node *head;

    void clear() {
        Node *p = head;
        //从头结点开始循环删除
        while (p) {
            Node *q = p->next;
            delete p;
            p = q;
        }
    }

    //查找数据d的上一个节点位置的函数
    //为了方便后面删除操作
    Node *find(const int &d) {
        Node *p = head;
        for (; p; p->next){
            if(p->next->data==d)
                break;
        }
        return p;
    }
};

int main() {
    List list;
    list.create_list();
    list.insert(30);
    list.insert(20);
    list.insert(10);
    list.insert_pos(10, 5);
    list.print();
}
