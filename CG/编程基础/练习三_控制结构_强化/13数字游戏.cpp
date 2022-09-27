#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int condense(int num) {
    string strNum = to_string(num);
    int final = 1;
    for (char aNum: strNum) {
        if(aNum - '0')
            final *= aNum - '0';
    }

    return final;
}

int main() {
    int curNum;
    vector<int> condensed;
    cin >> curNum;

    condensed.push_back(curNum);
    while (1) {
        if (!(curNum / 10)) {
            break;
        } else {
            curNum = condense(curNum);
            condensed.push_back(curNum);
        }
    }

    for (int cond: condensed) {
        cout << cond << ' ';
    }


}