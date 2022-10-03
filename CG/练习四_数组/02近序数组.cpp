#include <iostream>

using namespace std;

bool is_sequence(int nums[], int size) {
    bool trend = 1; //i: increase; 0: decrease
    int tmp = nums[0];
    if (nums[1] > nums[0])
        trend = 1;
    else
        trend = 0;

    for (int i = 0; i < size - 1; ++i) {
        if (trend == 1) {
            if (nums[i + 1] < nums[i]) {
                return false;
            }
        } else if (nums[i + 1] > nums[i]) {
            return false;
        }
    }

    return true;

}

int main() {
    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++) {
        int tmpNum;
        cin >> tmpNum;
        nums[i] = tmpNum;
    }

    // judge
    bool flag = 0;
    for (int curLoc = 1; curLoc < n - 1; curLoc++) {
        int head[curLoc], tail[n - curLoc];
        for (int i = 0; i < curLoc; ++i) {
            head[i] = nums[i];
        }
        for (int i = 0; i < n - curLoc; ++i) {
            tail[i] = nums[curLoc + i];
        }

        if (is_sequence(head, curLoc) && is_sequence(tail, n - curLoc)) {
            flag = 1;
        }
    }

    cout << (flag ? "Yes" : "No");

}