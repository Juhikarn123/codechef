#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int all,chapra,restricted,padhai;
	    scanf("%d %d %d",&all,&chapra,&restricted);
	    int chappri=all-chapra;
	    int chapra_rem=chapra%restricted;
	    int chappri_rem=chappri%restricted;
	    if(all==chapra)
	    {
	        padhai=chapra_rem;
	    }
	     else if(all==chappri)
	    {
	        padhai=chappri_rem;
	    }
	    else if(chappri_rem==chapra_rem)
	    {
	     padhai=0;   
	    }
	    else if(chapra_rem>chappri_rem)
	    {
	        padhai=chapra_rem-chappri_rem;
	    }
	    else if(chappri_rem>chapra_rem)
	    {
	        padhai=chappri_rem-chapra_rem;
	    }
	    
	    printf("%d\n",padhai);
	}
	return 0;
}

