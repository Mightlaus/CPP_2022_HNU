#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
         ------>x(n)
         |
         |
         |
         y(m)
 */

struct Square {
    int x; // 位置x
    int y; // 位置y
    int dirX; // 入射方向x，1/-1
    int dirY; // 入射方向y，1/-1
    bool solid; // 实心1
    int times; // 被入射次数
};

void shoot(Square **matrix, int x, int y) {
    /*
                -   -   -   -   -   -   > x
             | （x)(y)      (x+dirX)(y)
             | (x)(y+dirY)（x+dirX)(y+dirY)
             |
             y
     */

    // todo 加一个边界判断
    matrix[x][y].times += 1;

    int dirX = matrix[x][y].dirX;
    int dirY = matrix[x][y].dirY;
    int newDirX, newDirY;
    if (!matrix[x + dirX][y + dirY].solid) { // （x+dirX)(y+dirY)  空：原路返回
        newDirX = dirX;
        newDirY = dirY;
    } else { // （x+dirX)(y+dirY) 非空
        if (!(matrix[x + dirX][y].solid xor matrix[x][y + dirY].solid)){ // (x+dirX)(y) 同或 (x)(y+dirY) ：原路返回
            newDirX = -dirX;
            newDirY = -dirY;
        } else {
            if(matrix[x + dirX][y].solid){ // (x+dirX)(y) 非空： x方向反，y方向不变
                newDirX = -dirX;
                newDirY = dirY;
            } else {
                newDirX = dirX;
                newDirY = dirY;
            }
        }
    }

    // 改变下一个square属性
    matrix[x+newDirX][y+newDirY].dirX = newDirX;
    matrix[x+newDirX][y+newDirY].dirY = newDirY;

}

void show_matrix(Square **i_matrix, int xLen, int yLen) {
    for (int x = 0; x < xLen; ++x) {
        printf("\tx=%d", x);
    }
    cout << endl;

    for (int y = 0; y < yLen; ++y) {
        printf("y=%d", y);
        for (int x = 0; x < xLen; ++x) {
            printf("\t %c", i_matrix[x][y].solid ? '*' : '0');
        }
        cout << endl;
    }

}


int main() {
    int n, m, k;
    cin >> n >> m >> k; // n rows(x), m columns(y), k black squares

//    Square matrix[m+2][n+2];

    auto **matrix = new Square *[m + 2];
    for (int i = 0; i < n + 2; i++) {
        matrix[i] = new Square[n + 2];
    }

    // 初始化matrix
    for (int x = 0; x < n + 2; ++x) {
        for (int y = 0; y < m + 2; ++y) {
            bool solid = 0;
            if (x == 0 or y == 0 or x == n + 1 or y == m + 1) { // 最外围全部实心
                solid = 1;
            }

            matrix[x][y] = Square{x, y, 0, 0, solid, 0};
        }
    }

    // 设置实心块
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        matrix[x + 1][y + 1] = Square{x + 1, y + 1, 0, 0, 1, 0};
    }

    show_matrix(matrix, n + 2, m + 2);

    cout << 0;

}