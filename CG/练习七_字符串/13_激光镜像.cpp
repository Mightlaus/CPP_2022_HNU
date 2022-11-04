#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ------>y(m)
// |
// |
// |
// x(n)

// 光线怎么走：分情况讨论
// 怎么判断进入死循环？（次数够就行）

struct Square{
    int x;
    int y;
    int dirX;
    int dirY;
    bool solid;
    int times;
};

void shoot(Square &square){
    // todo 加一个边界判断
    square.times += 1;

}

void show_matrix(Square **i_matrix, int xLen, int yLen){
    for (int x = 0; x < xLen; ++x) {
        printf("\tx=%d", x);
    }
    cout<<endl;

    for (int y = 0; y < yLen; ++y) {
        printf("y=%d", y);
        for (int x = 0; x < xLen; ++x) {
            printf("\t %c", i_matrix[x][y].solid ? '*' : '0');
        }
        cout<<endl;
    }

}


int main() {
    int n, m, k;
    cin >> n >> m >> k; // n rows(x), m columns(y), k black squares

//    Square matrix[m+2][n+2];

    auto **matrix = new Square *[m+2];
    for (int i = 0; i < m+2; i++) {
        matrix[i] = new Square[n+2];
    }

    // 初始化matrix
    for (int x = 0; x < n+2; ++x) {
        for (int y = 0; y < m+2; ++y) {
            bool solid = 0;
            if(x==0 or y==0 or x==n+1 or y==m+1){ // 最外围全部实心
                solid = 1;
            }

            matrix[x][y] = Square{x, y, 0, 0, solid, 0};
        }
    }

//    // 设置实心块
//    for (int i = 0; i < k; ++i) {
//        int x,y;
//        cin>>x>>y;
//        matrix[x+1][y+1] = Square{x+1, y+1, 0, 0, 1, 0};
//    }

    show_matrix(matrix, n+2, m+2);

    cout<<0;

}