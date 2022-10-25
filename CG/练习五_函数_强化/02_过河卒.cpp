#include <iostream>
#include <vector>

using namespace std;
int bx, by, hx, hy;

bool is_reachable(int x, int y, const int hx=hx, const int hy=hy)
{
    int deltaX = abs(x-hx);
    int deltaY = abs(y-hy);
    if(deltaX==2 && deltaY==1 or deltaX==1 && deltaY==2 or (x==hx and y==hy)){
        return false;

    }
    else {
        return true;
    }
}

int total_step(int x, int y, int arr[][20], const int &finalX=bx, const int &finalY=by, const int &hx=hx, const int &hy=hy)
{
    //禁区
    if (!is_reachable(x, y, hx, hy)){
        return 0;
    }

    // 动态规划
    if(arr[x][y]>=0){
        return arr[x][y];
    }
    else {
        if(x==0){
            arr[x][y] = total_step(x, y-1, arr);
        } else if(y==0){
            arr[x][y] = total_step(x-1, y, arr);
        } else {
            arr[x][y] = total_step(x - 1, y, arr) + total_step(x, y - 1, arr);
        }
        return arr[x][y];
    }
}

int main()
{
    cin >> bx >> by >> hx >> hy;

    int arr[20][20];
    // 初始化
    for (int i=0; i<=bx; ++i){
        for (int j=0; j<=by; ++j){
            arr[i][j] = -1;  // 先全部从初始化为-1
        }
    }

    // 初始化第一行
    for(int i=0; i<=by; ++i){
        if(!is_reachable(0, i)){
            break;
        }
        arr[0][i] = 1;
    }

    // 初始化第一列
    for(int i=0; i<=bx; ++i){
        if(!is_reachable(i, 0)){
            break;
        }
        arr[i][0] = 1;
    }

    int final = total_step(bx, by, arr, bx, by, hx, hy);

    cout << final;
    return 0;

}


