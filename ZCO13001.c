#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    long long n;
    scanf("%lld", &n);

    int *a = (int *)malloc(n * sizeof(int));
    long long sum = 0;

    for (long long i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmpfunc);

    for (long long i = 1 - n, j = 0; j < n; i += 2, j++) {
        sum += a[j] * i;
    }

    printf("%lld\n", sum);

    // Free allocated memory
    free(a);

    return 0;
}
