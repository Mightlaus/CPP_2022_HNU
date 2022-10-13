#include "yang.h"

using namespace std;

void PrintBlank(int n){
    for(int i=0; i<n; ++i){
        cout << " ";
    }
}

void PrintCombine(int n){
    int xishu[n];
    xishu[0] = 1;

    for(int i=1; i<n; ++i){
        xishu[i] = xishu[i-1] * (n-i)/(i);
    }

    for(auto a:xishu){
        cout << a << " ";
    }
}
