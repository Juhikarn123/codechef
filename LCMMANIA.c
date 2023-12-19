#include <stdio.h>

void findValues(long long int num_input) {
    long long int counter_i = 1, flag = 0;
    while (counter_i < num_input - 1) {
        long long int counter_j = counter_i;
        while (counter_j < num_input - 1) {
            if (!((num_input - counter_i) % (2 * counter_j))) {
                printf("1 %lld %lld\n", counter_i, (counter_j * (num_input - counter_i)) / (2 * counter_j));
                flag = 1;
                break;
            }
            counter_j = 2 * counter_j;
        }
        if (flag) break;
        counter_i = counter_i * 2;
    }

    if (!flag) printf("-1\n");
}

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int test_case = 0; test_case < num_tests; ++test_case) {
        long long int num_input;
        scanf("%lld", &num_input);

        findValues(num_input);
    }

    return 0;
}
