#include <iostream>

using namespace std;

bool is_lucky_num(int num) {
    if (!(num % 4) || !(num % 7)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        int tmpNum;
        cin >> tmpNum;
        cnt += is_lucky_num(tmpNum) ? tmpNum : 0;
    }

    cout << cnt;
}