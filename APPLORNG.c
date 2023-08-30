#include <stdio.h>

int main(void) {
	// your code goes here
	int rupees;
	scanf("%d",&rupees);
	int apple,orange;
	scanf("%d %d",&apple,&orange);
	int total=apple+orange;
	if(total>rupees)
	{
	    printf("No\n");
	}
	else
	{
	    printf("Yes\n");
	}
	return 0;
}

