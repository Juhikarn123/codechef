#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}

int main(void)
{
    int N, K, *A;
    scanf("%d%d", &N, &K);

    A = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    qsort(A, N, sizeof(int), cmp);

    int i = 0, j = 1, count = 0;
    while (i < N && j < N) {
        if (A[j] - A[i] >= K) {
            count += N - j;
            i++;
        }
        else {
            j++;
        }
    }

    printf("%d\n", count);

    free(A);
    return 0;
}