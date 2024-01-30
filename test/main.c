#include <limits.h>
#include <stdio.h>
#include "../main.h"


int main(void)
{
	int len;
	int len2;
	
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Negetive:[%d]\n", -762534);
	printf("Negetive:[%d]\n", -762534);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len = _printf("Percent: [%%]\n");
	len2 = printf("Percent: [%%]\n");

	_printf("Len: [%d]\n", len);
	printf("Len: [%d]\n", len2);


	printf("printf Unknown: [%r]\n");

	_printf("_printf Unknown: [%r]\n");
	return (0);
}
	
