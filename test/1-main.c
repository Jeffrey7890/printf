#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n = -10002020;
	printf("%u\n", n);
	_printf("%u\n", n);
	printf("%u\n", UINT_MAX);

	printf("%o\n", 1234);
	_printf("%o\n", 1234);
	


	printf("%x\n", 1234);
	_printf("%x\n", 1234);

	printf("%X\n", 1234);
	_printf("%x\n", 1234);
	return (0);
}
