#include <stdio.h>

int main(void) 
{
	
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int RTP_course,Audit_course,nonRTP;
	    scanf("%d %d %d",&RTP_course,&Audit_course,&nonRTP);
	    int total_credit=4*RTP_course+2*Audit_course+0*nonRTP;
	    printf("%d\n",total_credit);
	}
	return 0;
}

