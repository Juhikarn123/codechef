#include <stdio.h>
#include <math.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) {
        long long juhi;
        scanf("%lld", &juhi);
        long long jashi = sqrtl(juhi);
        
        if (juhi % 2 == 1) {
            jashi++;
        }
        
        printf("%lld\n", jashi / 2);
    }

    return 0;
}
