#include <stdio.h>
#include <inttypes.h>
int main()
{
	printf("Sizeof int: %d\n", sizeof(int));
	printf("Sizeof intptr_t: %d\n", sizeof(intptr_t));
	printf("Sizeof void*: %d\n", sizeof(void*));
	printf("Sizeof long: %d\n", sizeof(long));
	printf("Sizeof long long: %d\n", sizeof(long long));
	return 0;
}
