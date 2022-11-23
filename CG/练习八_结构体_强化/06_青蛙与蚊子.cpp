#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

/*
 *
 * 之前落下的蚊子没有被吃掉，但是后来舌头长长了就又可以吃掉了(太恶心了)
 * 青蛙和蚊子都需要做成结构体，并且放到容器里
 * 青蛙一次性全部装入，蚊子一轮轮装入
 *
 * 逻辑判断：
 *  加入一只蚊子
 *      就针对目前的蚊子容器循环判断，是否有可以被吃掉的
 *      while
 *          新的一轮吃蚊子
 *          for(每一只蚊子)
 *              for(每一只青蛙)
 *                  可以被当前青蛙吃掉->青蛙指针放到容器able中
 *                  sort able 找到最小号然后吃蚊子
 *              下一只蚊子
 *      如果这一轮啥都没吃，那就放入新的蚊子
 *
 * 只有一个存放frog的容器，剩下临时able的容器应该要存放指向frog的指针才可以
 */

struct Frog {
    int pos;
    int len;
    int eatCnt;

    Frog(int pos, int len)
            : pos(pos), len(len), eatCnt(0) {}
};

struct Mos {
    int pos;
    int weight;
    int eaten;

    Mos(int pos, int weight)
            : pos(pos), weight(weight), eaten(0) {}
};

bool cmp(Frog *f1, Frog *f2) {
    return f1->pos < f2->pos;
}

int main() {
    int n, m;
    cin >> n >> m; //   青蛙n 蚊子m

    vector<Frog> frogs;
    vector<Mos> moss;

    for (int i = 0; i < n; ++i) {
        int pos, len;
        cin >> pos >> len;
        frogs.push_back(Frog(pos, len));
    }

    // 新增一只蚊子
    for (int i = 0; i < m; ++i) {
        vector<Frog *> able;
        int mosPos, mosWeight;
        cin >> mosPos >> mosWeight;
        moss.push_back(Mos(mosPos, mosWeight));

        //对每只蛙循环判定，直到全部无法吃为止
        int curTermEat = 1;
        while (curTermEat) {
            //每只蚊子
            curTermEat = 0;
            for (int j = 0; j < moss.size(); ++j) {
                vector<Frog*> able;
                if (moss[j].eaten == 1) {
                    continue;
                }

                //每只蛙
                for (int k = 0; k < frogs.size(); ++k) {
                    if (frogs[k].pos <= moss[j].pos and frogs[k].pos + frogs[k].len >= moss[j].pos) {
                        able.push_back(&frogs[k]);
                    }
                }
                sort(able.begin(), able.end(), cmp);

                if(able.empty()){
                    continue;
                } else {
                    moss[j].eaten=1;
                    curTermEat++;
                    able[0]->eatCnt++;
                    able[0]->len += moss[j].weight;
                }
            }
        }
    }

    //输出
    for (auto x: frogs) {
        cout << x.eatCnt << " " << x.len << endl;
    }

}
