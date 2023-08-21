#include <stdio.h>

int main(void) {
	// your code goes here
	int question[10],cnt=0;
	for(int i=0;i<=4;i++)
	{
	    scanf("%d",&question[i]);
	    if(question[i]>=10)
	    cnt++;
	}
	printf("%d",cnt);
	return 0;
}

