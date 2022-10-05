#include <iostream>
#include <algorithm>

using namespace std;

bool isNew(int num, int numLs[], int size) {
    for (int i = 0; i < size; ++i) {
        if (num == numLs[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, d;
    cin >> n >> d;  // n: current num of hotel, d: min dist
    int newHotel = 0;

    int hotel[n];
    for (int i = 0; i < n; ++i) {
        cin >> hotel[i];
    }

    int right = hotel[n - 1];
    int left = hotel[0];

    for (int curPlace = left - d; curPlace <= right + d; ++curPlace) {
        int nearest = 9999999;
        for (int curCk = 0; curCk < n; ++curCk) {
            int diff = abs(curPlace - hotel[curCk]);
            if (diff <= nearest) {
                nearest = diff;
            }
        }
        if (nearest == d && isNew(curPlace, hotel, n)) {
            newHotel += 1;
        }
    }

    cout << newHotel;

}
