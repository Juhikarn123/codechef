// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.


#include <stdio.h> 

int main() {
	int Testcase;
	scanf("%d", &Testcase);
	while (Testcase--) {
		
		int num1, num2;
		scanf("%d %d", &num1, &num2);

		// Compute the ans.
		int sum = num1+num2;
		printf("%d\n", sum);
	}

	return 0;
}