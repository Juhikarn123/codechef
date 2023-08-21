#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int setofsquats,totalsquats;
	    scanf("%d",&setofsquats);
	    totalsquats=15*setofsquats;
	    printf("%d\n",totalsquats);
	}
	return 0;
}

