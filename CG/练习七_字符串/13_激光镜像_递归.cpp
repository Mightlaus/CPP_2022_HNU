#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int matrix[1002][1002]; // 最大1002*1002

int cnt = 0;
int linear = 0;

void shoot(int x, int y, int dirX, int dirY) {
    int newDirX = dirX, newDirY = dirY;
    int newX = x, newY = y;
    // -1实心， 0未经过， >0已经过
    if (matrix[x + dirX][y + dirY] == -1) { // 对角块实心
        if (!(matrix[x + dirX][y] == -1 xor matrix[x][y + dirY] == -1)) { // 周围块空心，反射
            newDirX *= -1;
            newDirY *= -1;
        } else {
            if (matrix[x + dirX][y] == -1) {
                newDirX *= -1;
                newY += newDirY;
            } else {
                newDirY *= -1;
                newX += newDirX;
            }
        }
    } else { // 对脚块是空的
        newX += newDirX;
        newY += newDirY;
    }
    if (linear > cnt) { // 判断返回（linear>=2并不可以）
        return;
    } else {
        newDirX;
        newDirY;
        if (matrix[x][y] == 0) {
            cnt++;
            linear = 0;
        } else {
            linear++;
        }
        if (matrix[x][y] >= 0) matrix[x][y] += 1;

        shoot(newX, newY, newDirX, newDirY);
    }
}

int main() {
    int n, m, k, x, y, dirX = 1, dirY = 1;
    string dirStr;
    cin >> n >> m >> k;

    for (int ix = 0; ix < n + 2; ++ix) {
        for (int iy = 0; iy < m + 2; ++iy) {
            if (ix == 0 or ix == n + 1 or iy == 0 or iy == m + 1) {
                matrix[ix][iy] = -1;
            }

        }
    }
    for (int i = 0; i < k; ++i) {
        cin >> x >> y;
        matrix[x][y] = -1;
    }

    cin >> x >> y >> dirStr;
    if (dirStr[0] == 'N') dirY = -1;
    if (dirStr[1] == 'W') dirX = -1;

    shoot(x, y, dirX, dirY);
    cout << cnt;
}
