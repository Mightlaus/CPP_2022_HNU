/*
 * 【问题描述】

       矩阵是线性代数中的重要概念，应用领域非常广泛，在C/C++中，通常将矩阵定义为一个二维数组。

       本问题中，将输入两个矩阵 A 和 B，实现对矩阵的数乘、矩阵加法、矩阵乘法以及行列式的计算。

       如果对矩阵的算法不了解，请查阅相关资料。

【输入形式】

       输入的第一行为两个正整数 M 和 N，分别表示矩阵 A 的行数和列数；

       接下来的 M 行，每行 N 个用空格分隔的整数，表示矩阵 A 的元素值；

       接下来的一行，为一个整数 x,  用于对矩阵 A 进行数乘；

       接下来的一行为两个正整数 K 和 L, 分别表示矩阵 B 的行数和列数；

       接下来的 K 行，每行为 L 个用空格分隔的整数，表示矩阵 B 的元素值。

【输出形式】

       输出的第一部分为 M 行，每行为 N 个用空格分隔的整数，表示 x 数乘 A 的结果；

       接下来(如果有），如果 A 和 B 可以相加，则输出 M 行，每行为 N 个用空格分隔的整数，表示矩阵 A+B 的结果；

       接下来(如果有），如果 A 和 B 可以相乘，则输出 M 行，每行为 L 个用空格分隔的整数，表示矩阵 A×B 的结果；

       接下来一行(如果有），如果 A 的行列式存在，则输出一个整数，表示 A 的行列式的值；

       接下来一行(如果有），如果 B 的行列式存在，则输出一个整数，表示 B 的行列式的值。
 */

#include  <iostream>
#include  <cstdlib>

using namespace std;

class matrix {
private:
    int rows, cols;
    int **p;
public:
    matrix();

    matrix(int &M, int &N);

    matrix(matrix &A, int &&m, int &n);

    ~matrix();

    matrix multi(int x);      //  数乘
    int det();                      //  计算行列式
    void out();        //输出矩阵
    void input();

    matrix operator+(matrix &another);  //重载加法运算实现矩阵相加
    matrix operator*(matrix &another);  //重载乘法运算实现矩阵相乘
};

matrix::matrix(int &M, int &N) {
    rows = M, cols = N;
    p = new int *[rows];
    for (int i = 0; i < M; i++) {
        p[i] = new int[cols];
    }
}

matrix::matrix(matrix &A, int &&m, int &n)      //从矩阵A中删除第m行第n列后得到新的矩阵
{
    // begin

    // end
}

matrix::~matrix() {
    for (int i = 0; i < rows; i++)
        delete[]  p[i];

    delete[]  p;
}

matrix matrix::multi(int x)      //  数乘
{
    matrix tmp(rows, cols);

    // begin

    // end

    return tmp;
}

void matrix::out()        //输出矩阵
{
    /*  逐行输出，数据间用空格分隔  */
    // begin

    // end

}

void matrix::input() {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> p[i][j];

}

matrix matrix::operator+(matrix &another)  //重载加法运算实现矩阵相加
{
    matrix tmp(rows, cols);
    /*  矩阵对应位置元素相加  */
    // begin

    // end

    return tmp;
}

matrix matrix::operator*(matrix &another)    //重载乘法运算实现矩阵相乘
{
    matrix tmp(rows, another.cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < another.cols; j++) {
            /*  计算A矩阵的第i行与B矩阵的第j列元素对应相乘后之和，作为新矩阵的第i行第j列元素的值  */
            // begin

            // end

        }
    }
    return tmp;
}

int matrix::det() {
    if (rows == 1)
        return p[0][0];
    else {
        int result = 0, flag;
        for (int i = 0; i < cols; i++) {
            flag = (i % 2) ? -1 : 1;
            matrix tmp(*this, 0, i);
            result = result + flag * p[0][i] * tmp.det();        //  使用代数余子式求行列式的值,  递归
        }
        return result;
    }
}

int main() {
    int M, N;

    //  A矩阵的行和列
    cin >> M >> N;

    matrix mA(M, N);        //生成A矩阵

    //  输入矩阵值

    mA.input();

    //  输入数乘值

    int x;
    cin >> x;

    matrix mm1 = mA.multi(x);

    mm1.out();

    //B矩阵的行和列
    int K, L;
    cin >> K >> L;

    matrix mB(K, L);    //生成B矩阵
    mB.input();

    /*  求矩阵A和矩阵B的和  */

    if (M == K && N == L) {
        matrix mm2 = mA + mB;
        mm2.out();
    }

    /*  求矩阵A和矩阵B的乘积矩阵  */
    if (N == K) {
        matrix mm3 = mA * mB;
        mm3.out();
    }

    /*  矩阵A的行列式的值  */
    if (M == N)
        cout << mA.det() << endl;

    if (K == L)
        cout << mB.det() << endl;

    return 0;
}