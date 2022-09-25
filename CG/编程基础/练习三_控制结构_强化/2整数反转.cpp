#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    long num;
    string str_num, cnv_num;


    cin >> num;

    if (num >= 0) {
        str_num = to_string(num);
        for (int ix = 1; ix <= str_num.length(); ix++) {
            cnv_num.push_back(str_num[str_num.length() - ix]);
        }
    } else {
        str_num = to_string(-num);
        cnv_num.push_back('-');
        for (int ix = 1; ix <= str_num.length(); ++ix) {
            cnv_num.push_back(str_num[str_num.length() - ix]);
        }
    }

    if (stoll(cnv_num) > 2147483647 || stoll(cnv_num) < -2147483648) {
        cout << 0;
    } else {
        bool bErZero=true;  // erase zero in the front
        for(char str : cnv_num){
            if(str=='0' && bErZero){

            } else {
                bErZero = false;
                cout << str;
            }

        }
    }



}