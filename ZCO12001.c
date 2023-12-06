#include <stdio.h>

int main(void) {
    int n, count = 0, max = 0, fpos = 0, var = 0, var_max = 0, ind = 0, ind_max = 0;
    scanf("%d", &n);
    int a[n];

    // Input: array elements
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (size_t i = 0; i < n; i++) {
        if (count == 0) {
            ind = i;
        }

        if (a[i] == 1) {
            count++;
        }

        if (a[i] == 2) {
            count--;
        }

        if (max < count) {
            fpos = i + 1;
            max = count;
        }

        if (count != 0) {
            var++;
            if (var > var_max) {
                ind_max = ind + 1;
                var_max = var;
            }
        } else {
            var = 0;
        }
    }

    // Output: maximum number of matching brackets, starting position, length, and starting index
    printf("%d %d %d %d\n", max, fpos, var_max + 1, ind_max);

    return 0;
}
