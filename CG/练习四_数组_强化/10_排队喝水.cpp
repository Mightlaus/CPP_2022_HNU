#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;


    for (int i = 0; i < T; ++i) {
        int n;  // n个学生
        cin >> n;
        int l[n], r[n]; //到达时间l, 离开时间r

        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
        }

        int finalTime[n];   // 最终打到水or离开队伍时间


        // 开始打水
        int former = l[0] + 1;    // 第一个单独计算
        finalTime[0] = l[0];
        for (int i = 1; i < n; ++i) {
            // 上一个打完水时间是否超过了自己的等待时间
            if (r[i] < former)  // 超过了，离开
            {
                finalTime[i] = 0;
            } else        // 没有超过，打水
            {
                if (former > l[i])     // 需要等待前一个打完才能打水
                {
                    finalTime[i] = former;
                    former = former + 1;
                } else        // 直接打水
                {
                    finalTime[i] = l[i];
                    former = l[i] + 1;
                }

            }
        }

        for (auto a: finalTime) {
            printf("%d ", a);
        }
        printf("\n");
    }
}
