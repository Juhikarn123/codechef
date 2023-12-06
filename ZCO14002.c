#include <stdio.h>

int min(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    if (b <= c && b <= a) {
        return b;
    }
    return c;
}

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int dp[n];
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2];

    for (int i = 3; i < n; i++) {
        dp[i] = min(dp[i - 1], dp[i - 2], dp[i - 3]) + a[i];
    }

    printf("%d", min(dp[n - 1], dp[n - 2], dp[n - 3]));

    return 0;
}
