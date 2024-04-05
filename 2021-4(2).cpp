#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 2022; // ���峣��N����ʾͼ�еĽ������
int dist[N];        // ����dist���洢��Դ�㣨���1����ÿ���������·������
bool st[N];         // ����st����ǽ���Ƿ��Ѿ��ҵ����·�����ѱ����ʣ�

int main() {
    memset(dist, 0x3f, sizeof dist); // ��ʼ��dist����Ϊһ���ǳ����ֵ���������޴�
    memset(st, false, sizeof st);    // ��ʼ��st���飬���н���ʼ״̬Ϊδ���ʣ�false��
    dist[1] = 0;                     // Դ�㣨���1�����Լ������·������Ϊ0

    // ��ѭ����ѭ������Ϊ�������N-1
    for (int i = 1; i < N; i ++) {
        int t = -1; // t���ڴ洢��ǰδ������dist��С�Ľ����

        // ������δ���ʽ����Ѱ��dist��С�Ľ��
        for (int j = 1; j < N; j ++)
            if (!st[j] && (t == -1 || dist[j] < dist[t]))
                t = j; // ����tΪ��ǰdist��С��δ���ʽ����

        // ��ǽ��tΪ�ѷ���
        st[t] = true;

        // ������t���ڽ������·��
        for (int j = max(t - 21, 1); j <= min(t + 21, N - 1); j ++)
            dist[j] = min(dist[j], dist[t] + t / __gcd(t, j) * j);
    }

    // ����ӽ��1�����2021�����·������
    cout << dist[2021] << endl;
}

