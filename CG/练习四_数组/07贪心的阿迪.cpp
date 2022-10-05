#include <iostream>

using namespace std;

int main() {
    int k, n, x, M, D; // k kids with n sugar, allocate x per time , x<=M

    cin >> n >> k >> M >> D;
    int diMax = 0;

    int kids[k];
    int kidsTime[k];


    for (int curX = 1; curX <= M; ++curX) {
        int addFlag=1;
        for(int ki=0; ki<k; ++ki){
            kids[ki] = 0;
        }
        for(int ki=0; ki<k; ++ki){
            kidsTime[ki] = 0;
        }

        int sugarRemain = n;
        int alloKidIdx = 0;
        while(sugarRemain>=curX){
            kids[alloKidIdx] += curX;
            kidsTime[alloKidIdx] += 1;

            if(kidsTime[alloKidIdx]>D){
                addFlag=0;
                break;
            }

            alloKidIdx = alloKidIdx==k-1? 0 : alloKidIdx+1;
            sugarRemain-=curX;
        }

        if(kids[0]>diMax && addFlag){
            diMax = kids[0];
        }

    }

    cout << diMax;
}