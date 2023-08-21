#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int bullet,goomba,timee;
	    scanf("%d %d %d",&bullet,&goomba,&timee);
	    int TotalBulletTime=goomba/bullet;
	    if(timee<=TotalBulletTime)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("%d\n",(timee-TotalBulletTime));
	    }
	}
	return 0;
}

