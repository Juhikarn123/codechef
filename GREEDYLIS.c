#include <stdio.h>

void greedyQuestion(long long int juhi, long long int jashi) {
    if (jashi == 0) {
        for (int i = 1; i <= juhi; i++) {
            printf("%d ", i);
        }
        printf("\n");
        return;
    }

    if (juhi - jashi <= 1) {
        printf("-1\n");
        return;
    }

    long long int a = juhi - 1 - jashi;
    jashi = juhi + 1 - a;

    printf("%lld ", jashi);

    int c = 1;

    for (int i = 1; i < juhi; i++) {
        if (i == jashi) {
            c++;
        }
        printf("%d ", c);
        c++;
    }
    printf("\n");
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    while (testcase > 0) {
        testcase--;
        long long int juhi, jashi;
        scanf("%lld %lld", &juhi, &jashi);

        greedyQuestion(juhi, jashi);
    }

    return 0;
}
