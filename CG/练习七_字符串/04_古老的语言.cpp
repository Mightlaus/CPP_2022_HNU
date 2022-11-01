#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 辅音+元音； 元音+其他； n+anything
using namespace std;

vector<char> yuanyin({'a', 'o', 'u', 'i', 'e'});

bool legal(char thisOne, char prevOne) {
    if (prevOne == 'n') { // 前一个是n
        return true;
    } else if (count(yuanyin.begin(), yuanyin.end(), prevOne)) { // 前一个是元音
        return true;
    } else { // 前一个是辅音
        if (count(yuanyin.begin(), yuanyin.end(), thisOne)) {
            return true;
        } else {
            return false;
        }
    }


}

int main() {
    string str;
    cin >> str;

    char *thisStr = &str[1];

//    cout<< str<<endl;
    if (str.size() == 1) {
        if (str[str.size() - 1] == 'n' or count(yuanyin.begin(), yuanyin.end(), str[str.size() - 1])) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        return 0;
    }


    while (thisStr <= &str[str.size() - 1]) {
        if (!legal(*thisStr, *(thisStr - 1))) {
            cout << "NO";
            return 0;
        }
        thisStr++;
    }

    //最后一个单独判断
    if (str[str.size() - 1] == 'n' or count(yuanyin.begin(), yuanyin.end(), str[str.size() - 1])) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}
