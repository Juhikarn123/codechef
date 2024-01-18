#include <stdio.h>
#include <math.h>

#define INF 1e9

int juhi(int juhi1, int juhi2, int juhi3, int juhi4, int juhi5) {
    int jashi = ceil((double)juhi1 / juhi2);

    int nit = (juhi1 / juhi3 >= juhi5) ? juhi5 + ceil(((double)juhi1 - juhi5 * juhi3) / juhi4) : ceil((double)juhi1 / juhi3);

    return fmin(jashi, nit);
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; ++i) {
        int juhi1, juhi2, juhi3, juhi4, juhi5;
        scanf("%d %d %d %d %d", &juhi1, &juhi2, &juhi3, &juhi4, &juhi5);

        int jashi2 = juhi(juhi1, juhi2, juhi3, juhi4, juhi5);

        printf("%d\n", jashi2);
    }

    return 0;
}
