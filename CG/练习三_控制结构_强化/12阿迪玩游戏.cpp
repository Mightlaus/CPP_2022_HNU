#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    int N, M, curPlace = 1, dirc = 1, curStep;

    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        cin >> curStep;
        for (int step = 1; step <= curStep; ++step) {
            if (curPlace + dirc > N || curPlace + dirc < 1) {
                dirc *= -1;
            }
            curPlace += dirc;
        }
    }

    cout << curPlace;
}