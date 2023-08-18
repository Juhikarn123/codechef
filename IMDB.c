#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int no_movies,space,maximum=0;
	    scanf("%d %d",&no_movies,&space);
	    int array[no_movies][2];
	    for(int i=0;i<no_movies;i++)
	    {
	        scanf("%d %d",&array[i][0],&array[i][1]);
	        if(array[i][0]<=space)
	        {
	            if(maximum<array[i][1])
	            maximum=array[i][1];
	        }
	    }
	    printf("%d\n",maximum);    
	}
	return 0;
}

