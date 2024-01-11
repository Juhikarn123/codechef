#include <stdio.h>
#include <string.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) {
        int juhi, jashi;
        scanf("%d %d", &juhi, &jashi);
        char s[juhi + 1];
        scanf("%s", s);

        if (s[0] == '0') {
            printf("NO\n");
            continue;
        }

        long long count = 0;

        for (int i = 0; i < juhi; i++) {
            if (s[i] == '1')
                count = jashi;
            else {
                count--;

                if (count < 0) {
                    printf("NO\n");
                    break;
                }
            }
        }

        if (count >= 0) {
            printf("YES\n");
        }
    }

    return 0;
}
