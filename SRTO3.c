#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void processTestCase() {
    int naap1, naap2, nit = 0;
    scanf("%d %d", &naap1, &naap2);

    int *juhi = (int *)malloc(naap1 * sizeof(int));
    int *jashi = (int *)malloc(naap2 * sizeof(int));

    for (int i = 0; i < naap1; i++) 
        scanf("%d", &juhi[i]);

    for (int i = 0; i < naap2; i++) {
        scanf("%d", &jashi[i]);
        nit = (jashi[i] > nit) ? jashi[i] : nit;
    }

    qsort(juhi + (naap1 - nit), nit, sizeof(int), compare);

    for (int i = 0; i < naap1; i++)
        printf("%d ", juhi[i]);

    printf("\n");

    free(juhi);
    free(jashi);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        processTestCase();
    }

    return 0;
}
