#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    long t, a, b, k;
    vector<long> outcome;
    cin >> t;

    for (int curT = 1; curT <= t; ++curT) {
        cin >> a >> b >> k;
        if (!(k % 2)) {
            outcome.push_back(k / 2 * (a - b));
        } else {
            outcome.push_back(k / 2 * (a - b) + a);
        }
    }

    for (long n: outcome) {
        cout << n << '\n';
    }
}
