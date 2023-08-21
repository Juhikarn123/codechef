#include <stdio.h>

int main(void) {
	// your code goes here
	int number_notes,rupees;
	scanf("%d",&number_notes);
	rupees=number_notes*2000;
	int total_notes=rupees/500;
	printf("%d",total_notes);
	
	return 0;
}

