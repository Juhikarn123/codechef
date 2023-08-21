#include <stdio.h>

int main(void) {
	// your code goes here
	int goal_messi,assist_messi,goal_ronaldo,assist_ronaldo,total_messi,total_ronaldo;
	scanf("%d %d %d %d",&goal_messi,&assist_messi,&goal_ronaldo,&assist_ronaldo);
	total_messi=goal_messi*2+assist_messi*1;
	total_ronaldo=goal_ronaldo*2+assist_ronaldo*1;
	if(total_messi==total_ronaldo)
	{
	    printf("Equal\n");
	}
	else if(total_messi>total_ronaldo)
	{
	    printf("Messi\n");
	}
	else if(total_messi<total_ronaldo)
	{
	    printf("Ronaldo\n");
	}
	return 0;
}

