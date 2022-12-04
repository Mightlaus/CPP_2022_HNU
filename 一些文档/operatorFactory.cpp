#include "bits/stdc++.h"

using namespace std;

/*
 * 运算符重载并不能改变默认的计算顺序
 *
 * 类的【成员函数操作符】第一个参数（被操作数）默认为类对象(*this)，不需要填
 * 类中声明的【友元函数操作符】实质上与类无关， 操作数与被操作数都需要填
 */

class Myclass {
public:

    /*
     * 一元运算符重载
     *  一元操作符 - + -- ++ ！一般只出现在左边，eg: -obj;
     *  要出现在右边，需要填入一个int参数（int没有实际意义）
     */
    void operator++();

    void operator--(int);

    // 连续自减之类需要返回对象的引用
    Myclass &operator--();

    /*
     * 二元运算符重载 + - * /
     * 二元运算符需要两个参数，如果是类的成员函数则默认第一个参数(左侧的被操作数)为对象自身
     */
    Myclass &operator+(Myclass &asst);

    friend Myclass &operator+(Myclass &asst, int n);

    friend Myclass &operator+(int n, Myclass &asst);

    /*
     * 关系运算符
     * 其实和二元运算符一样，注意参数位置即可
     */
    bool operator>(Myclass &ass);

    /*
     * 流运算符
     * 一般重载成返回值为流的友元函数，这样可以正常使用
     */
    friend ostream &operator<<(ostream &output, Myclass obj);

    friend istream &operator>>(istream &input, Myclass &obj);


    /*
     * 赋值运算符 & 拷贝构造函数
     * 这两个应该区分开。拷贝构造函数是初始化，只能有一次，而赋值可以有多次
     * 默认的拷贝构造函数、赋值运算符都是把原有对象的所有成员变量赋值给新对象, 但是指针变量还是指向原来的内存，这可能造成相互影响或内存泄漏
     *
     * 拷贝构造函数必须传引用（可以不加const）
     * 赋值运算符返回类型应该是引用 Class& 这样才可以保证连续赋值
     */
    Myclass(Myclass const &old); // 拷贝构造函数
    Myclass();

    Myclass &operator=(Myclass asst); // 赋值运算符重载

private:
    int num = 1;
    int weight = 10;

};


void Myclass::operator++() {
    num += 5;
}

void Myclass::operator--(int) {
    num -= 100;
}

Myclass &Myclass::operator--() {
    num -= 2;
    return *this;
}

Myclass &Myclass::operator+(Myclass &asst) {
    this->weight += asst.weight;
    return *this;
}

Myclass &operator+(Myclass &asst, int n) {
    asst.weight += n;
    return asst;
}

Myclass &operator+(int n, Myclass &asst) {
    asst.weight += n;
    return asst;
}

bool Myclass::operator>(Myclass &ass) {
    return this->weight > ass.weight;

}

ostream &operator<<(ostream &output, Myclass obj) {
    cout << "Redef output:" << endl;
    cout << "Weight:" << obj.weight << endl;
    return output;
}

istream &operator>>(istream &input, Myclass &obj) {
    int weight, num;
    cin >> weight >> num;

    obj.weight = weight;
    obj.num = num;

    return input;
}

Myclass &Myclass::operator=(Myclass asst) {
    this->weight = -100 * asst.weight;
    this->num = -100 * asst.num;
    return *this;
}

Myclass::Myclass(const Myclass &old) {
    this->weight = -old.weight;
    this->num = -old.num;
}

Myclass::Myclass() {
    num = 1;
    weight = 10;
}


int main() {
    // 调用无参数的拷贝构造函数
    Myclass obj;
    Myclass asst;

    // 一元运算符重载
    ++obj;
    obj--;
    --(--obj);

    // 二元运算符重载
    obj + asst + asst;
    obj + -100 + 22;
    -22 + obj;

    // 比较运算符重载
    cout << (obj > asst) << endl;

    // 流运算符重载
    cout << obj;
//    cin>>obj;

    // 赋值运算符重载
    Myclass newObj(obj);
    newObj = obj;

    cout << 0;
}