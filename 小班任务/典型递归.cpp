#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 阶乘
int jie(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * jie(n - 1);
    }
}

// fib数列
int fib(int n) {
    static vector<int> db(n, -1);
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        if (db[n] >= 0) return db[n];
        else {
            db[n] = fib(n - 1) + fib(n - 2);
        }
    }
}

// 求杨辉三角第n行第m列的数
int yang(int n, int m) {
    if (n == 1 and m==1) {
        return 1;
    } else if (m < 0 or m > n) {
        return 0;
    }

    return yang(n - 1, m - 1) + yang(n - 1, m);
}


// 回文字符判断
bool huiwen(string str){
    int head=0, tail=str.size()-1;
    if(head>=tail){
        return true;
    } else {
        if(str[head]!=str[tail]){
            return false;
        } else {
            return huiwen(str.substr(head+1,tail-1));
        }
    }
}

// 字符串全排列
void str_permutate(vector<char> &str, int from, int to){
    if(to<=1){
        return;
    }
    if (from==to){
        for (int i = 0; i <= to; ++i) {
            cout << str[i];
        }
        cout << endl;
    } else {
        for (int i = from; i <= to; ++i) {
            swap(str[from], str[i]);
            str_permutate(str, from+1, to);
            swap(str[from], str[i]);
        }
    }
}


int main() {
    vector<char> str({'a','b','c'});
    str_permutate(str, 0, 2);

    return 0;
}