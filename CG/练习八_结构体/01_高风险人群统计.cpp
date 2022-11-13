#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x;
    int y;
};

int main() {
    // DFS 深度优先搜索/广度优先搜索

    int ulX, ulY, drX, drY;
    cin >> ulX >> ulY >> drX >> drY;

    int n;
    cin >> n;

    auto p_points = new point[n];
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        p_points[i].x = x;
        p_points[i].y = y;
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (p_points[i].x > drX or p_points[i].x < ulX) {
            continue;
        }
        if (p_points[i].y > ulY or p_points[i].y < drY) {
            continue;
        }

        cnt++;
    }

    cout << cnt;
}
