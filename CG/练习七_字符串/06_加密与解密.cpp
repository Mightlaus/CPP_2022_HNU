#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_factors(int n) {
    vector<int> factors;
    for (int j = n; j > 1; --j) {
        if (!(n % j)) {
            factors.insert(factors.begin(), j);
        }
    }

    return factors;
};

void myReverse(string &str, int n) {
    reverse(str.begin(), str.begin() + n);
}

int main() {
    string str;
    getline(cin, str);

    auto factors = get_factors(str.size());
    for (int factor: factors) {
        myReverse(str, factor);
    }

    cout << str;
}