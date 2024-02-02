#include <stdio.h>
#include "../main.h"

int main(void)
{
	void *addr;

	addr = (void *)0x7fff6089064;

	unsigned long a = (unsigned long) addr;
	printf("%lu\n", a);
	_printnum_ul(a, 16, 0);
	_putchar('\n');
	printf("%lx\n", a);
	return (0);
}
