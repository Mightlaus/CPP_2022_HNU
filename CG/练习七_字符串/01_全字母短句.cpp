#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> word_s;
vector<char> word_b;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string str;
        getline(cin, str);

        for (int i = 'A'; i <= 'Z'; ++i) {
            word_b.push_back(i);
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            word_s.push_back(i);
        }

        vector<bool> have(word_b.size(), 0);
        for (auto x: str) {
            for (int i = 0; i < word_b.size(); ++i) {
                if (x == word_b[i] or x == word_s[i]) {
                    have[i] = 1;
                }
            }
        }

        if (count(have.begin(), have.end(), 1) == have.size()) {
            cout << "YES" << endl;
        } else {
            cout << "No";
            for (int i = 0; i < have.size() - 1; ++i) {
                if (have[i] == 0) {
                    cout << " " << word_b[i];
                }
            }
        }

    }
}
