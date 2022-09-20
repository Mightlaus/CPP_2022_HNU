#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;
// 1	3	6	10	15
// 1	4	10	20	35
// 1	2	3	4	5

int a_layer(int layer_num){
    int sum = 0;
    for(int i=1; i<=layer_num; ++i){
        sum += i;
    }

    return sum;
}

int main(){
    int total_sq=0, layer=5;
//    cin >> layer;
    for(int i=1; i<=layer; ++i){
        total_sq += a_layer(i);
    }

    cout << total_sq;
}


