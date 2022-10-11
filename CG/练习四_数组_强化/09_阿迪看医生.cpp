#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;
    int firstDay[n], gapDay[n];

    for (int i = 0; i < n; ++i) {
        int f, e;
        cin >> f >> e;

        firstDay[i] = f;
        gapDay[i] = e;
    }

    int thisDay=0;
    int thisDentist=0;

    while(thisDentist<n){
        int k=0; // gaps
        while(1){
            if (firstDay[thisDentist] + k * gapDay[thisDentist] > thisDay){
                thisDay = firstDay[thisDentist] + k * gapDay[thisDentist];
                thisDentist++;
                break;
            } else {
                ++k;
            }
        }
    }

    cout << thisDay;
}