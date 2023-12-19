#include <stdio.h>
#include <stdlib.h>

// Structure to represent an interval
struct Interval {
    int start;
    int end;
};

// Function to compare intervals based on their ending points
int compareIntervals(const void *a, const void *b) {
    return ((struct Interval *)a)->end - ((struct Interval *)b)->end;
}

// Function to find the size of the smallest set that covers the intervals
int smallestCoverSetSize(int N, struct Interval intervals[]) {
    // Sort intervals based on their ending points
    qsort(intervals, N, sizeof(struct Interval), compareIntervals);

    int minSetSize = 0;
    int lastCovered = -1;

    for (int i = 0; i < N; i++) {
        if (intervals[i].start > lastCovered) {
            minSetSize++;
            lastCovered = intervals[i].end;
        }
    }

    return minSetSize;
}

int main() {
    int N;
    scanf("%d", &N);

    struct Interval intervals[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &intervals[i].start, &intervals[i].end);
    }

    int result = smallestCoverSetSize(N, intervals);
    printf("%d\n", result);

    return 0;
}