#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<char> color, num;

    char curColor, curNum, colorInHand, numInHand;
    scanf("%c%c", &numInHand, &colorInHand);

    while (cin >> curNum >> curColor) {
        color.push_back(curColor);
        num.push_back(curNum);
    }

    if (count(color.begin(), color.end(), colorInHand) ||
	 count(num.begin(), num.end(), numInHand)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
