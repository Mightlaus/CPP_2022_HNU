#include <iostream>

using namespace std;


int main() {
    int n, T;
    cin >> T;

    for (int j = 0; j < T; ++j) {
        cin >> n;

        int nums[n];

        for (int i = 0; i < n; i++) {
            int tmpNum;
            cin >> tmpNum;
            nums[i] = tmpNum;
        }

        // judge
        bool flag = true;
        int tmp = nums[1] > nums[0] ? 1 : -1;
        for (int i = 1; i < n - 1; ++i) {
            if((nums[i+1] - nums[i])*tmp>=0)
                flag = false;
            tmp*=-1;
        }


        cout << (flag ? "Yes" : "No") << endl;
    }


}