#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
/*
 * 题目没说清楚，**输出必须升序**
 * 面向对象，面向结构体，逻辑更容易理顺！！！
 * 边写边注释
 */
struct Movie {
    int sound;
    int subtitle;
};

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int main() {
    //n科学家，m电影。 音频-非常 字幕-基本

    int n;
    cin >> n;
    int familiar[n]; // 熟悉的语言编号
    for (int i = 0; i < n; ++i) {
        cin >> familiar[i];
    }

    int m;
    cin >> m;
    Movie movies[m];
    for (int i = 0; i < m; ++i) {
        cin >> movies[i].sound;
    }
    for (int i = 0; i < m; ++i) {
        cin >> movies[i].subtitle;
    }

    vector<pair<int, int>> rate; // 每部电影打分<电影序号（1开始），得分>
    for (int i = 0; i < m; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            //每个科学家
            if (movies[i].sound == familiar[j]) {
                cnt += 1000;
            } else if (movies[i].subtitle == familiar[j]) {
                cnt += 1;
            }
        }

        rate.push_back(make_pair(i + 1, cnt));
    }

    // 筛选
    sort(rate.begin(), rate.end(), cmp);

    //判断
    if (rate[0].second == 0) {
        cout << "unsatisfied";
    } else if ((rate[0].second - rate[1].second) % 1000) {
        cout << rate[0].first;
    } else {
        vector<int> mov;
        for (int i = 0; i < m; ++i) {
            if (rate[i].second != rate[0].second) {
                break;
            }
            mov.push_back(rate[i].first);
        }
        sort(mov.begin(), mov.end());
        for (auto x: mov) {
            cout << x << " ";
        }
    }

}