#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> move_range(int pos, int range, int last) {
    vector<int> thisRange;
    int begin, end;
    if (pos - range < 0) {
        begin = 0;
    } else {
        begin = pos - range;
    }

    if (pos + range > last) {
        end = last;
    } else {
        end = pos + range;
    }

    thisRange.push_back(begin);
    thisRange.push_back(end);

    return thisRange;
}

struct Robot {
    int pos;
    int range;
    int begin;
    int end;
};

vector<Robot> exert_robot(string strRob) {
    vector<Robot> robots;
    for (int i = 0; i < strRob.size(); ++i) {
        if (strRob[i] == '.') {
            continue;
        }

        auto thisRange = move_range(i, strRob[i] - '0', strRob.size());
        robots.push_back(Robot{i, strRob[i] - '0', thisRange[0], thisRange[1]});
    }

    return robots;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        auto robot = exert_robot(str);

        //! 注意考虑没有机器人的情况
        if (robot.empty()) {
            cout << "safe" << endl;
            continue;
        }

        bool is_safe = 1;
        for (int idx = 0; idx < robot.size() - 1; idx++) {
            if (robot[idx + 1].begin <= robot[idx].end) {
                is_safe = 0;
                break;
            }
        }

        if (is_safe) {
            cout << "safe" << endl;
        } else {
            cout << "unsafe" << endl;
        }


    }

}