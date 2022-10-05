#include <iostream>
#include <vector>

using namespace std;

bool check(int place, int moLst[], int iptMo[]) {
    if (moLst[place] == iptMo[place]) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int iptMo[n];
    for (int i = 0; i < n; ++i) {
        int curMo;
        cin >> curMo;
        iptMo[i] = curMo;
    }

    int nMo_nMo[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                     31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nMo_sMo[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                     31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sMo_nMo[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                     31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    bool finished = true;

    // nMo_nMo
    for (int comBegin = 0; comBegin < 24; ++comBegin) {
        int comIdx = comBegin;
        for (int iptIdx = 0; iptIdx < n; ++iptIdx) {
            if (nMo_nMo[comIdx] == iptMo[iptIdx] && comIdx < 24) {
                comIdx++;
                finished = true;
            } else {
                finished = false;
                break;
            }
        }

        if (finished)
            break;
    }

    // nMo_sMo
    if (!finished) {
        for (int comBegin = 0; comBegin < 24; ++comBegin) {
            int comIdx = comBegin;
            for (int iptIdx = 0; iptIdx < n; ++iptIdx) {
                if (nMo_sMo[comIdx] == iptMo[iptIdx] && comIdx < 24) {
                    comIdx++;
                    finished = true;
                } else {
                    finished = false;
                    break;
                }
            }

            if (finished)
                break;
        }
    }

    // sMo_nMo
    if (!finished) {
        for (int comBegin = 0; comBegin < 24; ++comBegin) {
            int comIdx = comBegin;
            for (int iptIdx = 0; iptIdx < n; ++iptIdx) {
                if (sMo_nMo[comIdx] == iptMo[iptIdx] && comIdx < 24) {
                    comIdx++;
                    finished = true;
                } else {
                    finished = false;
                    break;
                }
            }

            if (finished)
                break;
        }
    }


    cout << (finished ? "Yes" : "No");


}
