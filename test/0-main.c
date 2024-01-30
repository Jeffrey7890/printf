#include "../main.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{

	int len;
	int len2;


	len = _printf("Let's try %c to %crintf a simple sentence.\n");
	len2 = printf("Let's try %c to %crintf a simple sentence.\n");

	printf("Length: [%d, %i]\n", len, len2);

	len = _printf("%i\n", 102030);
	len2 = printf("%i\n", 102030);


	printf("Length2: [%d]\n", len2);
	printf("Length1: [%d]\n", len);

	len = _printf("INT_MAX: %i\n", 052);
	len2 = printf("INT_MAX: %i\n", 052);


	printf("_printf of INT_MAX:%d\n", len);
	printf("printf of INT_MAX: %d\n", len2);



	return (0);
}
