#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    string str("ThisIsHnu");

    // 获取子字符 substr(plc, n) 从第5位起(包含)连取3位
    auto subs = str.substr(5, 3);
    cout << "subs: " << subs << endl;

    //查找子串 find(substr, begin)从begin开始查找substr子串，找到返回第一个字母位置，找不到返回-1
    auto findResult = str.find(subs);
    auto nFind = str.find(subs, 8);
    cout << "find: " << findResult << endl;
    cout << "nFind: " << nFind << endl; //由于是unsigned long long输出并不是-1但是判定结果仍为-1

    //反转 reverse(begin, end)
    reverse(subs.begin(), subs.end());
    cout << "reverse subs : " << subs << endl;

    //插入 insert(bigin_pos, str)
    str.insert(2, "*INSERT*");
    cout << "insert: " << str << endl;

    //删除 erase(begin, end)
    str.erase(str.begin() + 2, str.begin() + 9);
    cout << "erase: " << str << endl;
    //删除 erase(begin_pos, n)
    str.erase(2, 3);
    cout << "erase2: " << str << endl;

    // 包含空格的输入 getline(cin, str)
    getline(cin, str);
    cout << "getline: " << str << endl;

    // 得到输入流中的n个字符 cin.get(char, n), 无输入则直接吞掉一个字符
    char c[10];
    cin.get(c, 4);
    cout << "cin.get(c, n): " << c << endl;
    cin.get();
    cin >> str;
    cout < "remain: " << str << endl;

}