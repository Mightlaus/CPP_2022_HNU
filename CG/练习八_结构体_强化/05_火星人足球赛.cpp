#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int redCnt = 0;

class Member{
public:
    string team;
    int id;
    int yTime;
    Member(){
        yTime = 0;
    }

    void checkRed(char color, int time){
        if(color=='r'){
            printf("%s %d %d\n", team.c_str(), id, time);
            redCnt++;
        }
        if(yTime and color=='y'){
            printf("%s %d %d\n", team.c_str(), id, time);
            redCnt++;
        }

        yTime += 1; // 没吃红牌
    }
};

int main() {

    /*
     * 2黄=1红 罚下；
     * 时间；h-主队 a-客队；球员编号m； y-黄牌 r-红牌
     */
    string h, a;
    cin>>h>>a;

    int n;
    cin>>n;

    vector<Member> memberH(99);
    vector<Member> memberA(99);
    for (int i = 0; i < 99; ++i) {
        memberH[i].id = i+1;
        memberH[i].team = h;
    }
    for (int i = 0; i < 99; ++i) {
        memberA[i].id = i+1;
        memberA[i].team = a;
    }

    for (int i = 0; i < n; ++i) {
        int time, id;
        char team, color;
        cin>>time>>team>>id>>color;
        if(team=='h'){
            memberH[id-1].checkRed(color, time);
        } else {
            memberA[id-1].checkRed(color, time);
        }
    }

    if(redCnt==0){
        cout<<"No Red Card";
    }


}