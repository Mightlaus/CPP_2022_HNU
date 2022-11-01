#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    string str1, str2;
    cin >> str1 >> str2;
//    cout << str1 << endl << str2 << endl;
    //找到最短字符(str1)
    if (str1.size() > str2.size()) {
        swap(str1, str2);
    }

    int cnt = 0;
    while (1) {
        //找无可找，告辞！
        if (str1.empty()) {
            cnt += str2.size();
            break;
        }

        //接着找
        auto idx = str2.find(str1);
        //没找到
        if (idx >= str2.size()) {
            cnt++;
            //找不到，变化str1
            if (str1.size() == 1) {
                str1 = "";
            } else {
                str1 = str1.substr(1, str1.size() - 1);
            }
        } else { //匹配了
            //就是你
            if (str2.size()-idx==str1.size()) {
                cnt += idx;
                break;
            } else {//虚惊一场
                cnt++;
                if (str1.size() == 1) {
                    str1 = "";
                } else {
                    str1 = str1.substr(1, str1.size() - 1);
                }
            }
        }
    }

    cout << cnt;

}
