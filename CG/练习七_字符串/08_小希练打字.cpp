#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string leftSide("qwertasdfgzxcvbQWERTASDFGZXCVB");
string rightSide("yuiophjklnmYUIOPHJKLNM");

vector<string> typedWords;

bool familiar(string thisWord, vector<string> typedWord = typedWords) {
    if (count(typedWord.begin(), typedWord.end(), thisWord)) {
        return true;
    } else {
        return false;
    }
}

int hand_side(char c, string left = leftSide, string right = rightSide) {
    //左手-1， 右手1， 其余0；
    if (left.find(c) != -1) {
        return -1;
    } else if (right.find(c) != -1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    cin >> n;
    double time = 0;

    for (int i = 0; i < n; ++i) {
        string curStr;
        cin >> curStr;

        double timeSpeed = 1;
        if (familiar(curStr)) {
            timeSpeed = 0.5;
        }

        typedWords.push_back(curStr);

        int prevHand = hand_side(curStr[0]);
        time += 0.2 * timeSpeed;
        for (int j = 1; j < curStr.size(); ++j) {
            if (hand_side(curStr[j]) == prevHand) {
                time += 0.4 * timeSpeed;
            } else {
                time += 0.2 * timeSpeed;
            }
            prevHand = hand_side(curStr[j]);
        }

    }

    printf("%.0f", time * 10);
}