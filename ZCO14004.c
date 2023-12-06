#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int findMaxSum(int arr[], int n) {
    int *dp = (int *)malloc(n * sizeof(int));

    // Base cases
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(dp[1], max(arr[1] + arr[2], arr[0] + arr[2]));

    // Iterate over the array to fill the dp array
    for (int i = 3; i < n; i++) {
        dp[i] = max(max(dp[i - 1], dp[i - 2] + arr[i]), dp[i - 3] + arr[i - 1] + arr[i]);
    }

    int result = dp[n - 1];
    free(dp);
    return result;
}

int main(void) {
    int n, i;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = findMaxSum(arr, n);
    printf("%d\n", maxSum);

    free(arr);
    return 0;
}

