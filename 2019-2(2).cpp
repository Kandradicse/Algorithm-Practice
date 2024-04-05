#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
using namespace std;
char a[40][60];                                                 //存图
int nextx[4] = { 1,0,0,-1 }, nexty[4] = { 0,-1,1,0 };           //D<L<R<U      字典序直接把方向数组处理好就可以了
int dist[40][60];                                               //定义一个dist数组，用来存放各点到终点的最短距离
char dir[4] = { 'D','L','R','U' };                             
bool check(int x, int y) {
    return x > 0 && y > 0 && x <= 50 && y <= 50 && a[x][y] == '0'&&dist[x][y] == -1;
}
void bfs() {                                                    //BFS扫一遍，求出各点到终点的最短距离
    queue<pair<int, int> >q;
    memset(dist, -1, sizeof(dist));
    dist[30][50] = 0;
    q.push({ 30,50 });
    while (!q.empty()) {
        pair<int ,int> t = q.front();
        q.pop();
 
        for (int i = 0; i < 4; i++) {
            int newx = t.first + nextx[i];
            int newy = t.second + nexty[i];
            if (check(newx, newy)) {
                dist[newx][newy] = dist[t.first][t.second] + 1;
                q.push({ newx,newy });
            }
        }
 
    }
}
 
int main() {
 
    for (int i = 1; i <= 30; i++)
        for (int j = 1; j <= 50; j++)
            cin >> a[i][j];
    bfs();
 
    int x = 1, y = 1;                                                                       //从起点开始遍历
    string res;                                                                             //存答案
    while (x != 30 || y != 50) {
        for (int i = 0; i < 4; i++) {
            int newx = x + nextx[i];
            int newy = y + nexty[i];
            if (newx > 0 && newy > 0 && newx <= 30 && newy <= 50 && a[newx][newy] == '0'&&dist[newx][newy]==dist[x][y]-1) {
                x = newx, y = newy;
                res += dir[i];
                break;
            }
        }
    }
    cout << res << "\n";
    return 0;
}
