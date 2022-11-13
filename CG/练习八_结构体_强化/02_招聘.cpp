#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
/*
 * 注意题目的输入形式：
 * 不是一行一个人，是一行一个指标
 */
struct Employee {
    int K;
    int I;
    int E;
};

int main() {
    int n;
    cin >> n;
    auto employees = new Employee[n];


    for (int j = 0; j < n; ++j) {
        cin >> employees[j].K;
    }
    for (int j = 0; j < n; ++j) {
        cin >> employees[j].I;
    }
    for (int j = 0; j < n; ++j) {
        cin >> employees[j].E;
    }


    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (employees[j].K > employees[i].K and employees[j].I > employees[i].I and
                employees[j].E > employees[i].E) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

}