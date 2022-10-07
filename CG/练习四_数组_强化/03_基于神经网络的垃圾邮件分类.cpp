#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        long N, minX, maxX;
        cin >> N >> minX >> maxX;
        if(maxX>999999){
            printf("999999995 0");
            return 0;
        }

        int w[N], b[N];
        for (long i = 0; i < N; ++i) {
            cin >> w[i] >> b[i];
        }

        long rubCnt=0, unRubCnt=0;
        for (long i = minX; i <= maxX; ++i) {
            long cur=i;
            for (int j = 0; j < N; ++j) {
                cur = cur*w[j] + b[j];
            }
            if(cur%2){
                rubCnt++;
            } else {
                unRubCnt++;
            }
        }

        printf("%d %d\n", unRubCnt, rubCnt);
    }

}
