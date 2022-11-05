#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
         ------>x(n) E
         |
         |
         |
         y(m) N
 */

int n, m, k;
struct Square {
    int x; // 位置x
    int y; // 位置y
    int dirX; // 入射方向x，1/-1
    int dirY; // 入射方向y，1/-1
    bool solid; // 实心1
    int times; // 被入射次数
};

struct Trace{
    int x;
    int y;
    int dirX;
    int dirY;
};
vector<Trace> traceTrack;

void shoot(Square **p_matrix, int &x, int &y) {
    /*
                -   -   -   -   -   -   > x
             | （x)(y)      (x+dirX)(y)
             | (x)(y+dirY)（x+dirX)(y+dirY)
             |
             y
     */
    p_matrix[x][y].times += 1;

    int dirX = p_matrix[x][y].dirX;
    int dirY = p_matrix[x][y].dirY;
    int newDirX, newDirY;
    if (!p_matrix[x + dirX][y + dirY].solid) { // （x+dirX)(y+dirY)  空：继续前进
        newDirX = dirX;
        newDirY = dirY;
        x = x + newDirX;
        y = y + newDirY;
    } else { // （x+dirX)(y+dirY) 非空
        if (!(p_matrix[x + dirX][y].solid xor p_matrix[x][y + dirY].solid)) { // (x+dirX)(y) 同或 (x)(y+dirY) ：原路返回
            newDirX = -dirX;
            newDirY = -dirY;
            x = x;
            y = y;
        } else {
            if (p_matrix[x + dirX][y].solid) { // (x+dirX)(y) 非空： x方向反，y方向不变
                newDirX = -dirX;
                newDirY = dirY;
                x = x;
                y = y+newDirY;
            } else { // (x+dirX)(y) 非空： x方向不变，y方向反
                newDirX = dirX;
                newDirY = -dirY;
                x = x + newDirX;
                y = y;
            }
        }
    }

    // 改变下一个square属性
    p_matrix[x][y].dirX = newDirX;
    p_matrix[x][y].dirY = newDirY;
    traceTrack.push_back(Trace{x, y, newDirX, newDirY});
}

void show_matrix(Square **p_matrix, int xLen, int yLen) {
    for (int x = 0; x < xLen; ++x) {
        printf("\tx=%d", x);
    }
    cout << endl;

    for (int y = 0; y < yLen; ++y) {
        printf("y=%d", y);
        for (int x = 0; x < xLen; ++x) {
            printf("\t %c", p_matrix[x][y].solid ? '*' : p_matrix[x][y].times+'0');
        }
        cout << endl;
    }
    cout << endl;

}

void initialize(Square **p_matrix, int x, int y, string dir) {
    int dirX, dirY;
    if (dir[0] == 'N') {
        dirX = 1;
    } else {
        dirX = -1;
    }

    if (dir[1] == 'E') {
        dirY = 1;
    } else {
        dirY = -1;
    }

    p_matrix[x][y].dirX = dirX;
    p_matrix[x][y].dirY = dirY;

    traceTrack.push_back(Trace{x, y, dirX, dirY});
}

bool is_loop(Square **p_matrix, int x, int y){
    // 判断开始循环
    if(p_matrix[x][y].times>=1 and x>0 and x<m+1 and y>0 and y<n+1){ // 剔除边框
        for (auto trace : traceTrack) {
            // 位置与方向完全重合
            if(trace.x==x and trace.y==y and trace.dirX==p_matrix[x][y].dirX and trace.dirY==p_matrix[x][y].dirY){
                return true;
            }
        }
    }

    return false;
}

int main() {
    cin >> n >> m >> k; // n rows(x), m columns(y), k black squares

    auto **p_matrix = new Square *[m + 2];
    for (int i = 0; i < n + 2; i++) {
        p_matrix[i] = new Square[n + 2];
    }


    // 初始化matrix
    for (int x = 0; x < n + 2; ++x) {
        for (int y = 0; y < m + 2; ++y) {
            bool solid = 0;
            if (x == 0 or y == 0 or x == n + 1 or y == m + 1) { // 最外围全部实心
                solid = 1;
            }

            p_matrix[x][y] = Square{x, y, 0, 0, solid, 0};
        }
    }

    // 设置实心块
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        p_matrix[x][y] = Square{x + 1, y + 1, 0, 0, 1, 0};
    }

    show_matrix(p_matrix, n + 2, m + 2);

    // 准备入射
    int x, y, antiLoopCnt=0;
    string dir;
    cin >> x >> y >> dir;
    initialize(p_matrix, x, y, dir);

    // 入射
    for (int i = 0; i < 40; ++i) {
        if(!is_loop(p_matrix, x, y)){
            shoot(p_matrix, x, y);
            cout<<"#"<<i;
            show_matrix(p_matrix, n+2, m+2);
        } else {
            cout<< i << endl;
            break;
        }

    }

}