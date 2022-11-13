#include "iostream"
#include "string"

using namespace std;


class NodeLink {
public:
    void createLink();

    void addHead(int data);

    void addTail(int data);

    void print();

    int find(int data);

    void insert(int pos, int data);

    void remove(int pos);

    void clear();

    NodeLink() {
        head = new Node(0);
        tail = head;
    }

    ~NodeLink() {
        clear();
    }

private:
    struct Node {
        int data;
        Node *next;

        Node(int d) : data(d), next(nullptr) {};
    };

    Node *head{};
    Node *tail{};

};

void NodeLink::addHead(int data) {
    Node *newNode = new Node(data);

    // 如果是插入的第一个节点，把tail指过去
    if (head->next == nullptr) {
        tail = newNode;
    }

    newNode->next = head->next;
    head->next = newNode;
}

void NodeLink::addTail(int data) {
    Node *newNode = new Node(data);
    if (tail == head) {
        head->next = newNode;
    }
    tail->next = newNode;
    tail = newNode;

}

void NodeLink::print() {
    Node *p = head->next;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}

int NodeLink::find(int data) {
    Node *p = head->next;
    int pos = 0;
    while (p) {
        if (p->data == data) {
            return pos;
        }
        p = p->next;
        pos++;
    }

    return -1;
}

void NodeLink::insert(int pos, int data) {
    auto newNode = new Node(data);
    // 找到pos-1位置的node
    auto p = head->next;
    for (int i = 0; i < pos - 1; ++i) {
        p = p->next;
    }

    newNode->next = p->next;
    p->next = newNode;
}

void NodeLink::remove(int pos) {
    Node *p = head->next;
    //头结点判断
    if (pos == 0) {
        Node *p_del = head->next;
        head->next = head->next->next;
        free(p_del);
        return;
    }
    //先找到pos-1个
    for (int i = 0; i < pos - 1; ++i) {
        p = p->next;
    }

    //维护指针
    Node *p_del = p->next;
    p->next = p->next->next;

    //删除pos个
    free(p_del);
}

void NodeLink::clear() {
    Node *p = head;

    //引入临时指针q记录p next,
    while (p) {
        p = p->next;
        auto *q = p->next;
        free(p);
        p = q;
    }

}

int main() {
    auto link = NodeLink();

    for (int i = 0; i < 5; ++i) {
        link.addTail(i);
    }

    link.insert(2, 20);
    link.remove(0);
    link.print();

    cout << endl << "found in position: " << link.find(4) << endl;

    link.clear();

    cout << 0;

}

