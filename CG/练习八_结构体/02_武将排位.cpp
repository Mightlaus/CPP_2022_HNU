#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct WUJIANG {
    string name;
    int tili;
    int zhili;
    int wuli;
};

// 1体力》2智力》3武力
/*
 * 题目描述有问题：
 * 输入 姓名、体力、智力、武力
 * 输出 也是 姓名、体力、智力、武力
 *
 * 注意冒泡排序i=0~n-1, j=0~n-i-1
 */
void wujiang_sort(vector<WUJIANG> &vec, int rule) {

    switch (rule) {
        case 1:
            for (int i = 0; i < vec.size() - 1; ++i) {
                for (int j = 0; j < vec.size() - i - 1; ++j) {
                    if (vec[j].tili < vec[j + 1].tili) {
                        swap(vec[j], vec[j + 1]);
                    }
                }
            }
            return;
        case 2:
            for (int i = 0; i < vec.size() - 1; ++i) {
                for (int j = 0; j < vec.size() - i - 1; ++j) {
                    if (vec[j].zhili < vec[j + 1].zhili) {
                        swap(vec[j], vec[j + 1]);
                    }
                }
            }
            return;
        case 3:
            for (int i = 0; i < vec.size() - 1; ++i) {
                for (int j = 0; j < vec.size() - i - 1; ++j) {
                    if (vec[j].wuli < vec[j + 1].wuli) {
                        swap(vec[j], vec[j + 1]);
                    }
                }
            }
            return;
    }


}

int main() {

    vector<struct WUJIANG> vec;

    while (1) {
        string name;
        int tili, zhili, wuli;
        cin >> name;
        if (name == "#") {
            break;
        }
        // 分别是姓名、体力、智力、武力
        cin >> tili >> zhili >> wuli;

        WUJIANG wujiang = {name, tili, zhili, wuli};

        vec.push_back(wujiang);
    }

    int rule;
    cin >> rule;

    wujiang_sort(vec, rule);

    for (auto x: vec) {
        printf("%s %d %d %d\n", x.name.c_str(), x.tili, x.zhili, x.wuli);
    }

}
