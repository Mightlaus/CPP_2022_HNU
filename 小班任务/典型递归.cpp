#include <iostream>
#include <vector>


using namespace std;

// 阶乘--返回结果进入下一次运算
int jie(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * jie(n - 1);
    }
}

// fib数列--static 动态存储
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

// 求杨辉三角第n行第m列的数--返回结果作为下一次运算
int yang(int n, int m) {
    if (n == 1 and m==1) {
        return 1;
    } else if (m < 0 or m > n) {
        return 0;
    }

    return yang(n - 1, m - 1) + yang(n - 1, m);
}


// 回文字符判断--指针
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


int main() {
    cout << huiwen((string) "4845484") << endl;
}