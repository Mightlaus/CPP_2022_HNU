#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*
 * 注意取词方法
 * getline 取一行，但是如果之前有回车就会只取\0
 * 这时候需要用cin.get()把回车吞掉
 */
using namespace std;

string word_s("abcdefghijklmnopqrstuvwxyz");
string word_b("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin.get();
        string str;
        getline(cin, str);

        vector<int> have(26, 0);

        for (auto x: str) {
            if(word_b.find(x)!=-1){
                have[x-'A'] += 1;
            } else if(word_s.find(x)!=-1){
                have[x-'a'] += 1;
            }
        }

        if (count(have.begin(), have.end(), 0)) {
            cout << "No";
            for (int i = 0; i < have.size(); ++i) {
                if (have[i] == 0) {
                    cout << " " << word_b[i];
                }
            }
        } else {
            cout << "Yes";

        }
        cout<<endl;
    }
}
