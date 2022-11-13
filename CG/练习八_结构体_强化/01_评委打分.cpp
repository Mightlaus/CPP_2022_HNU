#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

struct Candidate {
    string name;
    int scores[7];
    int finalScore;
};

bool cmp(Candidate candidate1, Candidate candidate2) {
    return candidate2.finalScore < candidate1.finalScore;
}

int main() {
    int n;
    cin >> n;
    Candidate candidates[n];
    for (int i = 0; i < n; ++i) {
        cin >> candidates[i].name;
        for (int j = 0; j < 7; ++j) {
            cin >> candidates[i].scores[j];
        }
        sort(candidates[i].scores, candidates[i].scores + 7);
        int finalScore = 0;
        for (int j = 1; j < 6; ++j) {
            finalScore += candidates[i].scores[j];
        }
        candidates[i].finalScore = finalScore;
    }

    sort(candidates, candidates + n, cmp);

    for (int i = 0; i < n; ++i) {
        printf("%s %d\n", candidates[i].name.c_str(), candidates[i].finalScore);
    }


}