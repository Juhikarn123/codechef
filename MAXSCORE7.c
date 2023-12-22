#include <stdio.h>

int minEvenOdd(int jashi[], int juhi) 
{
    int nottwo = 0, bytwo = 0;
    for (int i = 0; i < juhi; i++) 
    {
        if (jashi[i] == 0)
            nottwo++;
        else
            bytwo++;
    }
    return (bytwo < nottwo) ? bytwo : nottwo;
}

int main() 
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int juhi;
        scanf("%d", &juhi);
        int jashi[juhi];
        for (int i = 0; i < juhi; i++) 
        {
            scanf("%d", &jashi[i]);
        }
        int point = minEvenOdd(jashi, juhi);
        printf("%d\n", point);
    }
    return 0;
}
