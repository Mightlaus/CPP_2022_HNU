#include <iostream>
#include <string>
#include <vector>

#define MAXSIZE 2000000000000

using namespace std;

// erase head zeros and output a string
string erase_zero(const vector<int> &numVec) {
    string result;

    bool beginAdd = false;
    for (int i = numVec.size() - 1; i >= 0; --i) {
        int num = numVec[i];
        if (num) {
            beginAdd = true;
        }

        if (beginAdd) {
            result += char('0' + num);
        }
    }
    return result;
}

// convert string to rearranged(reversed) vector<int>
vector<int> str2vector(const string &strNums, int vSize = 2 * MAXSIZE) {
    vector<int> rearranged(vSize, 0);


    for (int strPlc = strNums.size() - 1, arrayPlc = 0; strPlc >= 0; strPlc--) {
        rearranged[arrayPlc] = strNums[strPlc] - '0';
        arrayPlc++;
    }

    return rearranged;
}

// add two huge number
string huge_add(const string &hugeNum1, const string &hugeNum2, int carryIn = 0) {

    int maxSize = max(hugeNum1.size(), hugeNum2.size());
    vector<int> addResult(maxSize + 1, 0);

    auto add1 = str2vector(hugeNum1);
    auto add2 = str2vector(hugeNum2);

    int curCarry = carryIn;
    for (int i = 0; i < maxSize; ++i) {
        addResult[i] = (curCarry + add1[i] + add2[i]) % 10;
        curCarry = (curCarry + add1[i] + add2[i]) / 10;
    }

    addResult[maxSize] = curCarry;

    return erase_zero(addResult);
}

// multiply a huge number with a single number;
string one_huge_multiply(const string &hugeNum, int sglNum, int carryIn = 0) {
    auto vHuge = str2vector(hugeNum);

    int size = hugeNum.size();
    vector<int> result(size + 1, 0);
    int curCarry = carryIn;
    for (int i = 0; i < hugeNum.size(); ++i) {
        result[i] = (vHuge[i] * sglNum + curCarry) % 10;
        curCarry = (vHuge[i] * sglNum + curCarry) / 10;
    }

    result[size] = curCarry;

    return erase_zero(result);
}

// huge multiply for two huge numbers
string huge_multiply(string num1, string num2) {
    auto vNum1 = str2vector(num1, num1.size());
    auto vNum2 = str2vector(num2, num2.size());

    string result = "0";
    for (int i = 0; i < vNum2.size(); ++i) {
        string curResult;
        curResult = one_huge_multiply(num1, vNum2[i]);
        for (int j = 0; j < i; ++j) {
            curResult += '0';
        }
        result = huge_add(result, curResult);
    }

    return result;
}

int main() {
    // generate two vectors to store two huge number
    string str;
    cin >> str;
    string hugeNum1 = str;
    cin >> str;
    string hugeNum2 = str;

    string calResult = huge_multiply(hugeNum1, hugeNum2);

    cout << calResult << endl;

    return 0;
}
