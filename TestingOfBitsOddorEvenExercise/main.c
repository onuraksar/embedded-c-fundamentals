#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void) {
	int32_t num1;
	printf("Enter a number: ");
	scanf("%d", &num1);

	// Using & (AND) Bitwise Operator aka Testing of Bits:
	if(num1 & 1) {
		printf("\nThe number is odd!");
	} else
		printf("\nThe number is even!");

	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void) {
	while(getchar() != '\n') {

	}
	getchar();
}
