#include <iostream>
#include <algorithm>

using namespace std;

int mod(int a, int b, int p) {
    if (b <= 1) {
        return a % p;
    }

    return a * mod(a % p, b - 1, p) % p;
}

int main() {
    int a, b, p;
    cin >> a >> b >> p;
    cout << mod(a, b, p);

}