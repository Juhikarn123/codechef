#include <stdio.h>

#define MAX_TYPES 1000

int maxNutritionValues(int n, int types[], int nutritionValues[]) {
    int maxNutrition[MAX_TYPES] = {0};

    for (int i = 0; i < n; ++i) {
        int type = types[i];
        maxNutrition[type] = maxNutrition[type] > nutritionValues[i] ? maxNutrition[type] : nutritionValues[i];
    }

    int nutritionSum = 0;
    for (int i = 0; i < MAX_TYPES; ++i) {
        nutritionSum += maxNutrition[i];
    }

    return nutritionSum;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int types[MAX_TYPES];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &types[i]);
        }

        int nutritionValues[MAX_TYPES];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &nutritionValues[i]);
        }

        int result = maxNutritionValues(n, types, nutritionValues);
        printf("%d\n", result);
    }

    return 0;
}
