#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int population,left_people,immigrate;
	    scanf("%d %d %d",&population,&left_people,&immigrate);
	    int final_population=population-left_people+immigrate;
	    printf("%d\n",final_population);
	}
	return 0;
}

