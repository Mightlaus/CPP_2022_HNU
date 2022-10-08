#include <iostream>
#include <string>
#include <vector>

# define MAXSIZE 20

using namespace std;

// erase head zero of a string
string erase_zero(const vector<int>& numVec){
    string result;

    bool beginAdd = false;
    for(int i=numVec.size()-1; i>=0; --i){
        int num = numVec[i];
        if(num){
            beginAdd = true;
        }

        if(beginAdd){
            result += char ('0' + num) ;
        }
    }

    return result;
}

// returns the carry result of adding two numbers
int carry_out(int num1, int num2, int carryIn = 0) {
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

// add two huge number
string hugeAdd(const string& hugeNum1, const string& hugeNum2, int carryIn=0){

    int maxSize = max(hugeNum1.size(), hugeNum2.size());
    vector<int> addResult(maxSize+1, 0);

    auto add1 = divide_nums(hugeNum1);
    auto add2 = divide_nums(hugeNum2);

    for (int i = 0, curCarry = carryIn; i < maxSize; ++i) {
        addResult[i] = (curCarry + add1[i] + add2[i]) % 10;
        curCarry = carry_out(add1[i], add2[i], curCarry);
    }

    string result = erase_zero(addResult);
    return result;
}


int main() {
    // generate two vectors to store two huge number
//    string str;
//    cin >> str;
//    auto hugeNum1= divide_nums(str);
//    cin >> str;
//    auto hugeNum2 = divide_nums((str));

    string a = "123456789098765432";
    string b = "234123432556789";

    auto r = hugeAdd(a, b);

    return 0;
}
