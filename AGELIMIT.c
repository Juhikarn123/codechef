#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int minimum_age,maximum_age,current_age;
	    scanf("%d %d %d",&minimum_age,&maximum_age,&current_age);
	    if(current_age>=minimum_age && current_age<maximum_age)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

