#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;

    cin >> num;
    vector<int> factor;

    for (int cur_num = 1; cur_num < num; cur_num++)
        if (!(num % cur_num)) {
            factor.push_back(cur_num);
        }

//    to sum up all factors in factor
    int sum=0;
    for (int f : factor) {
        sum += f;
    }

//    check if it is perfect num
    if (sum==num) {

        cout << "true";
    }
    else{
        cout << "false";}

}