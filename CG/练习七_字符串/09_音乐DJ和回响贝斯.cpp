#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    string str;
    cin >> str;

    while (1) {
        auto pos = str.find("WUB");
        if (pos == -1) {
            break;
        } else {
            str.erase(pos, 3);
            str.insert(pos, " ");
        }
    }

    // 删头去尾
    int hLen = 0;
    while (1) {
        if (str[hLen] != ' ') {
            break;
        } else {
            hLen++;
        }
    }
    str.erase(0, hLen);

    int tLen = str.size() - 1;
    while (1) {
        if (str[tLen] != ' ') {
            break;
        } else {
            tLen--;
        }
    }
    str.erase(tLen+1, str.size() - 1);

    //去中间
    for (int i = 10; i >= 2; i--) {
        string findSpace;
        for (int j = 0; j < i; ++j) {
            findSpace += " ";
        }
        while (1) {
            int pos = str.find(findSpace);
            if (pos==-1) break;
            str.erase(pos, i);
            str.insert(pos, " ");
        }
    }
    cout << str;

}