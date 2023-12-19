
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 305
int n;
int a[MAXN];
int dp[MAXN];

int is_palindrome(int l, int r) {
    while (l < r) {
        if (a[l] != a[r]) return 0;
        l++, r--;
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    memset(dp, 0x3f, sizeof(dp)); // initialize with a large value
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        if (is_palindrome(1, i)) {
            dp[i] = 1;
            continue;
        }
        for (int j = 1; j < i; j++) {
            if (is_palindrome(j+1, i)) {
                dp[i] = fmin(dp[i], dp[j] + 1);
            }
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}