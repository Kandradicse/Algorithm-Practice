#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 2022; // 定义常量N，表示图中的结点总数
int dist[N];        // 数组dist，存储从源点（结点1）到每个结点的最短路径距离
bool st[N];         // 数组st，标记结点是否已经找到最短路径（已被访问）

int main() {
    memset(dist, 0x3f, sizeof dist); // 初始化dist数组为一个非常大的值，代表无限大
    memset(st, false, sizeof st);    // 初始化st数组，所有结点初始状态为未访问（false）
    dist[1] = 0;                     // 源点（结点1）到自己的最短路径设置为0

    // 主循环，循环次数为结点数量N-1
    for (int i = 1; i < N; i ++) {
        int t = -1; // t用于存储当前未访问且dist最小的结点编号

        // 在所有未访问结点中寻找dist最小的结点
        for (int j = 1; j < N; j ++)
            if (!st[j] && (t == -1 || dist[j] < dist[t]))
                t = j; // 更新t为当前dist最小的未访问结点编号

        // 标记结点t为已访问
        st[t] = true;

        // 更新与t相邻结点的最短路径
        for (int j = max(t - 21, 1); j <= min(t + 21, N - 1); j ++)
            dist[j] = min(dist[j], dist[t] + t / __gcd(t, j) * j);
    }

    // 输出从结点1到结点2021的最短路径长度
    cout << dist[2021] << endl;
}

