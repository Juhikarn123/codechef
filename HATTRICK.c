#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) {
        char juhi[6];
        for (int i = 0; i < 6; i++) {
            scanf(" %c", &juhi[i]);
        }

        int count = 0;
        for (int i = 0; i < 6; i++) {
            if (juhi[i] == 'W') {
                count++;
                if (count == 3) {
                    printf("YES\n");
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (count < 3) {
            printf("NO\n");
        }
    }

    return 0;
}
