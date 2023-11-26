#include <stdio.h>
#include <string.h>

#define MOD 1000000007

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; ++i) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int si = 0, a = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == '?')
                si++;
            else
                a = a + (s[j] - '0');
        }
        if (s[0] == '?') {
            printf("1");
            si--;
            while (si--) {
                printf("0");
            }
            printf("\n");
        } else {
            if (si > 0) {
                a = a % 9;
                if (a == 0) {
                    si--;
                    while (si--)
                        printf("1");
                    printf("2\n");
                } else {
                    while (si--)
                        printf("1");
                    printf("\n");
                }
            } else {
                if (a % 9)
                    printf("0\n");
                else
                    printf("1\n");
            }
        }
    }

    return 0;
}
