#include "../main.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{

	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try w to rintf a simple sentence.\n");
	len2 = printf("Let's try  to rintf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;


	addr = (void *)0x7ffe637541f0;
	_printf("_len %d ", _printf("Address:[%p]\n", addr));
	printf("len %d ", printf("Address:[%p]\n", addr));

	/* 
	_printf("Unsigned hexadecimal: [%x, %X]\n", ui, -1 * ui);
	printf("Unsigned hexadecimal: [%x, %X]\n", ui, -1 * ui);

	_printf("Unsigned: [%u]\n", ui);
	printf("Unsigned: [%u]\n", ui);

	_printf("Unsigned octal: [%o]\n", ui);
	printf("Unsigned octal: [%o]\n", ui);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	printf("Length: [%d, %i]\n", len, len2);

	len = _printf("%i\n", 102030);
	len2 = printf("%i\n", 102030);


	printf("Length2: [%d]\n", len2);
	printf("Length1: [%d]\n", len);

	len = _printf("INT_MAX: %i\n", 052);
	len2 = printf("INT_MAX: %i\n", 052);


	printf("_printf of INT_MAX:%d\n", len);
	printf("printf of INT_MAX: %d\n", len2);

	len = _printf("Binary: [%b]\n", 052);
	len2 = _printf("Binary: [%b]\n", 42);


	printf("_printf of :%d\n", len);
	printf("printf of : %d\n", len2);

	*/	
	return (0);
}
