#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * 穷举
 */

using namespace std;

bool match(vector<int> wall, int row, int col) {
    if(wall[0]==row or wall[0]==col or wall[1]==row or wall[1]==col){
        return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> walls;

        string thisRow;
        for (int row = 0; row < n; ++row) {
            cin >> thisRow;
            for (int col = 0; col < m; ++col) {
                if (thisRow[col] == '*') {
                    walls.push_back(vector<int>({row, col}));
                }
            }
        }


        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                bool findFlag = 1;
                for (auto wall: walls) {
                    if(!match(wall, row, col)){
                        findFlag = 0;
                        break;
                    }
                }
                if(findFlag){
                    cout<<"YES";
                    return 0;
                }
            }
        }

        cout<<"NO";

    }

}
