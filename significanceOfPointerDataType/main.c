#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void) {

	//char:
	char *pAddress1;
	pAddress1 = (char*)&g_data; //mind you, matching  pointer and data types
	printf("Value at address %p is %d\n", pAddress1, *pAddress1);
	// gets 1 byte of data because char => 1 byte

	//int:
	int *pAddress2;
	pAddress2 = (int*)&g_data; //mind you, matching  pointer and data types
	printf("Value at address %p is %x\n", pAddress2, *pAddress2);
	// gets 4 bytes of data because int => 4 byte

	//short int:
	short *pAddress3;
	pAddress3 = (short*)&g_data; //mind you, matching  pointer and data types
	printf("Value at address %p is %x\n", pAddress3, *pAddress3);
	// gets 2 bytes of data because short => 2 byte

	//long long int:
	long long *pAddress4;
	pAddress4 = (long long*)&g_data; //mind you, matching  pointer and data types
	printf("Value at address %p is %I64X\n", pAddress4, *pAddress4);
	// gets 8 bytes of data because long long => 8 byte


	return 0;
}
