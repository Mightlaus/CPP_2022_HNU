#include <iostream>

#define MAXSIZE 200

using namespace std;

int main() {
    // input processing
    int arr1[MAXSIZE];
    int arr1Len = 0, arr2Len = 0;
    int arr2[MAXSIZE];
    char curChar;
    int pos = 0;

    // store input nums to temp array and get their length
    while (true) {
        scanf("%c", &curChar);
        if (curChar >= '0' && curChar <= '9') {
            arr1[pos] = curChar - '0';
            pos++;
        } else {
            break;
        }
    }
    arr1Len = pos;

    pos = 0;
    while (true) {
        scanf("%c", &curChar);
        if (curChar >= '0' && curChar <= '9') {
            arr2[pos] = curChar - '0';
            pos++;
        } else {
            break;
        }
    }
    arr2Len = pos;

    int ansSize = arr1Len + arr2Len;
    int ans[ansSize];
    for (int &a: ans) {
        a = 0;
    }

    // computing
    for (int i = 0; i < arr1Len; i++) {
        for (int j = 0; j < arr2Len; j++) {
            ans[i + j] += arr1[arr1Len - i - 1] * arr2[arr2Len - j - 1];
            ans[i + j + 1] += ans[i + j] / 10;
            ans[i + j] %= 10;
        }
    }

    // output
    int begin = ans[ansSize-1] ? ansSize-1 : ansSize-2;
    for (int idx = begin; idx >= 0; --idx) {
        printf("%d", ans[idx]);
    }
}
