#include <iostream>
#include <vector>


using namespace std;

int main() {
    int nums;
    cin >> nums;
    vector<int> stairsNum;

    int previous = -1;
    for (int i = 0; i < nums; ++i) {
        int cur;
        cin >> cur;
        if(cur<=previous){
            stairsNum.push_back(previous);
        }

        previous = cur;
    }

    stairsNum.push_back(previous);

    cout << stairsNum.size()<< endl;
    for (auto s:stairsNum) {
        cout << s << " ";
    }
}