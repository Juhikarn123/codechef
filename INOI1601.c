#include <stdio.h>







#include <stdlib.h>


// depth first search of reversed tree
static int dfs(int index, int* a, int* p, int* visited, int d, int* max) {
    // early return if the node has already been visited
    if (visited[index]) {
        if (*max < visited[index]) *max = visited[index];
        return visited[index] - d;
    };

    if (p[index] == -1) {
        *max = a[index];
        return a[index] - d;
    }


    int currentDisparity =  a[index] - d;
    int upperLevel = dfs(p[index] - 1, a, p, visited, (d < a[index] ? d : a[index]), max);
    if (a[index] > *max) *max = a[index];
    if (visited[index] > *max) *max = visited[index];
    visited[index] = *max;
    // printf("%d %d\n", *max, index);

    if(currentDisparity > upperLevel) return currentDisparity;
    return upperLevel;
}

static int calculate_disparity(int *a, int *p, int *visited, int size) {
    int maxD = 0;
    int maxV = 0;
    for (int i = 0; i < size; i++) {
        maxV = 0;
        if (!(visited[i] || p[i] == -1)) {
            int d = dfs(i, a, p, visited, a[i], &maxV);
            if (d > maxD) maxD = d;
        }
    }
    return maxD;
}

int main(void) {
    int e = 0;
    scanf("%d", &e);

    int *a = calloc(e, sizeof(int));
    int *p = calloc(e, sizeof(int));
    int *visited = calloc(e, sizeof(int));

    for (int i = 0; i < e; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < e; i++) {
        scanf("%d", &p[i]);
    }

    int disparity = calculate_disparity(a, p, visited, e);
    printf("%d\n", disparity);
}