#include <bits/stdc++.h>

int main() {
    for (double x = 1; x <= 11666666; ++x){
        double part1 = x / 23333333;
        double part2 = (23333333 - x) / 23333333;
        double e = -(x * x / 23333333 * log2(part1) + (23333333 - x) * (23333333 - x) / 23333333 * log2(part2));
        
        if (11625907 < e && e < 11625908) {
            printf("%lf\n", x);
            break;
        }
    }

    return 0;
}
