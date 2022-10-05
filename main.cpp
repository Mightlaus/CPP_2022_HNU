#include <iostream>

using namespace std;

bool conflict(int lst1[], int lst2[], int size, int num1, int num2){
    for (int idx = 0; idx < size; ++idx) {
        if((lst1[idx]==num1+1 && lst2[idx]==num2+1) || (lst1[idx]==num2+1 && lst2[idx]==num1+1)){
            return true;
        }
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;  // n monkeys, k pairs conflict

    int mokSkill[n];

    for (int i = 0; i < n; ++i) {
        cin >> mokSkill[i];
    }

    int confPair1[k], confPair2[k];
    for (int i = 0; i < k; ++i) {
        cin >> confPair1[i] >> confPair2[i];
    }

    int teachers[n] = {0};

    for (int curMok = 0; curMok < n; ++curMok) {
        int curTeacher = 0;
        for (int stu = 0; stu < n; ++stu) {
            if(mokSkill[curMok]>mokSkill[stu] &&
               !conflict(confPair1, confPair2, k, curMok, stu)){
                teachers[curMok] += 1;
            }
        }
    }

    for(int teacher : teachers){
        cout << teacher << " ";
    }
}