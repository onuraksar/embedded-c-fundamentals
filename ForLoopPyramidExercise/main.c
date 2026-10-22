#include<stdio.h>
#include<stdint.h>


void wait_for_user_input(void);


int main(void) {
	uint32_t heightOfPyramid;
	uint32_t i;
	uint32_t j;

	printf("Enter the height of the Pyramid: ");
	scanf("%d", &heightOfPyramid);

	for(i=1; i<=heightOfPyramid; i++) {

		for(j=0; j<i; j++) {
			printf("%d\t", i-j);

		}
		printf("\n");
	}


	wait_for_user_input();

	return 0;
}
void wait_for_user_input(void) {
	while(getchar() != '\n') {}
	getchar();
}
