#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x, y, k;
        scanf("%d %d %d", &x, &y, &k);

        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        if (k == 1) {
            printf("%d\n", x + gcd(x, y));
        } else {
            printf("%d\n", 2 * gcd(x, y));
        }
    }

    return 0;
}