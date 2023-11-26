#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        int counter = 0;
        int f = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                counter++;
            } else {
                counter--;
            }

            if (counter < -1 || counter > 1) {
                f = 0;
                printf("NO\n");
                break;
            }
        }

        if (f) {
            printf("YES\n");
        }
    }

    return 0;
}
