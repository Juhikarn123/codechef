#include <stdio.h>

void findGreatestAndSmallest(int num1, int num2, int num3, int *greatest, int *smallest) {
    *greatest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);


    *smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int num1, num2, num3, greatest, smallest;
    scanf("%d %d %d", &num1, &num2, &num3);
    findGreatestAndSmallest(num1, num2, num3, &greatest, &smallest);
    int diff=greatest-smallest;
    printf("%d\n",diff);

    }
   
    
    

   
    
    return 0;
}
