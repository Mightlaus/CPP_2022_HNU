#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool a_friend(int num, int self) {
    int total = 0;

    for (int tmp = 1; tmp < num; ++tmp) {
        if (!(num % tmp)) {
            total += tmp;
        }
    }

    if (total == self) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int s;
    cin >> s;

    while (1) {
        for (int is = 1; is < s; ++is) {
            if (a_friend(s, is) && a_friend(is, s)) {
                cout << is << ' ' << s << endl;
                return 0;
            }
        }

        s++;
    }

}