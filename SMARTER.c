#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int tescases;
	scanf("%d",&tescases);
	while(tescases--)
	{
	    int length_of_track,speed_of_tortoise,speed_of_hare;
	    scanf("%d %d %d",&length_of_track,&speed_of_tortoise,&speed_of_hare);
	    int time1,time2;
	    if(length_of_track%speed_of_tortoise==0)
	    {
	        time1=length_of_track/speed_of_tortoise;
	    }
	    else
	    {
	        time1=(length_of_track/speed_of_tortoise)+1;
	    }
	    if(length_of_track%speed_of_hare==0)
	    {
	        time2=length_of_track/speed_of_hare;
	    }
	    else
	    {
	        time2=(length_of_track/speed_of_hare)+1;
	    }
	    int main_time=time1-time2-1;
	    printf("%d\n",main_time);
	}
	return 0;
}

