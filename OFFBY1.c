#include <stdio.h>

int main(void) {
	// your code goes here
	int input_number1,input_number2;
	scanf("%d %d",&input_number1,&input_number2);
	int summation_answer=input_number1+input_number2;
	int main_summation=summation_answer*10+1;
	printf("%d\n",main_summation);
	return 0;
}

