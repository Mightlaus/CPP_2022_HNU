#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
/*
 *  输出按时间顺序排列的获得红牌的记录，
 *  如果时间相同，则主队排在前面，
 *  如果同一时间同一球队有多人获得红牌，则编号大的排在前面。
 *
 *  这很明显是一道多维度排序题，时间>队伍>编号，所以可以用sort方法
 *
 *  所以本题分两步走：
 *  1. 判断红牌的产生并记录信息放入容器中
 *      黄牌怎么变成红牌？加一个vector统计获得黄牌数，若已获得黄牌数==1并又获得一张则变为红牌
 *  2. 对容器sort后输出
 */


struct RedCard {
    int time;
    char team; // h主队， a客队，主队优先
    int num;
    RedCard(int time, char team, int num)
            :time(time), team(team), num(num){}
};

bool cmp(RedCard card1, RedCard card2) {
    if (card1.time != card2.time) return card1.time < card2.time;
    if (card1.team != card2.team) return card1.team > card2.team;
    return card1.num < card2.num;
}


int main() {

    /*
     * 2黄=1红 罚下；
     * 时间；h-主队 a-客队；球员编号m； y-黄牌 r-红牌
     */

    string h, a;
    cin >> h >> a; //队名

    int n; //违规次数
    cin >> n;

    // 存放红牌的容器
    vector<RedCard> redVec;

    // 用于统计对应序号的队员获得黄牌的情况,注意容量
    vector<bool> yelTh(100, false);
    vector<bool> yelTa(100, false);

    for (int i = 0; i < n; ++i) {
        int time, num;
        char team, color;
        cin >> time >> team >> num >> color;

        // 红牌，直接添加
        if(color=='r'){
            redVec.push_back(RedCard(time, team, num));
        } else {
            //黄牌，判断添加
            if(team=='h'){
                if(yelTh[num]){
                    redVec.push_back(RedCard(time, team, num));
                } else {
                    yelTh[num] = true;
                }
            }
            if(team=='a'){
                if(yelTa[num]){
                    redVec.push_back(RedCard(time, team, num));
                } else {
                    yelTa[num] = true;
                }
            }
        }
    }


    sort(redVec.begin(), redVec.end(), cmp);

    for(auto x:redVec){
        cout<<x.team<<" "<<x.num<<" "<<x.time<<endl;
    }
}