#include <iostream>
#include <string>
#include <vector>

# define MAXSIZE 20

using namespace std;

// Returns the carry result of adding two numbers
int carryOut(int num1, int num2, int carryIn = 0) {
    if (num1 + num2 + carryIn > 9) {
        return (num1 + num2 + carryIn) / 10;
    } else {
        return 0;
    }
}

// return the point of rearranged(reversed) int vector<int>
vector<int> divide_nums(const string &strNums, int vSize = MAXSIZE) {
    vector<int> rearranged(vSize, 0);


    for (int strPlc = strNums.size() - 1, arrayPlc = 0; strPlc >= 0; strPlc--) {
        rearranged[arrayPlc] = strNums[strPlc] - '0';
        arrayPlc++;
    }

    return rearranged;
}

string add(const string& hugeNum1, const string& hugeNum2, int carryIn=0){

    int maxSize = max(hugeNum1.size(), hugeNum2.size());
    vector<int> addResult(maxSize+1, 0);

    auto add1 = divide_nums(hugeNum1);
    auto add2 = divide_nums(hugeNum2);

    int curCarry = carryIn;
    for (int i = 0; i < maxSize; ++i) {

    }
    
}


int main() {
    // generate two vectors to store two huge number
    string str;
    cin >> str;
    auto hugeNum1= divide_nums(str);
    cin >> str;
    auto hugeNum2 = divide_nums((str));





    return 0;
}
