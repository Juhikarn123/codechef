#include <stdio.h>

int main(void) {
	// your code goes here
	int rainy,cloudy,clear;
	scanf("%d %d",&rainy,&cloudy);
	clear=7-rainy-cloudy;
	printf("%d\n",clear);
	return 0;
}

