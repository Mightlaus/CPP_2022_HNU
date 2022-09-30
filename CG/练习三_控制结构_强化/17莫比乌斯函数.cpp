#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

bool contain_pow(int num) {
    int curPow = 2;
    while (pow(curPow, 2) <= num) {
        if (num % (int) pow(curPow, 2) == 0) {
            return true;
        } else {
            curPow++;
        }
    }
    return false;
}

bool is_prime(int num) {
    for (int i = 2; i < num; ++i) {
        if (!(num % i)) {
            return false;
        }
    }

    if (num!=1)
        return true;
    else
        return false;
}

int is_mul_primes(int num) {
    int sumPrime = 0;
    vector<int> primeFactor;
    for (int i = 1; i < num; ++i) {
        if (is_prime(i) && !(num % i)) {
            primeFactor.push_back(i);
        }
    }

    if ((primeFactor.size()) % 2 && primeFactor.size()) {
        return 1;
    } else if(!(primeFactor.size() % 2) && primeFactor.size()){
        return 0;
    }
}

int main() {
    int N;

    while(cin >> N){
        if (contain_pow(N)) {
            cout << 0;
        } else if (is_prime(N) || is_mul_primes(N)==1){
            cout << -1;
        } else if (is_mul_primes(N) == 0) {
            cout << 1;
        } else if (N==1){
            cout << 1;
        } else {
            cout << "Not considered.";
        }
        cout << endl;
    }


}
