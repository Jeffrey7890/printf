#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len;

	printf("Debuging\n");
	len = _printf("%S\n", "Best\nSchool");
	_printf("len %d\n", len);
	printf("len %d\n", len);
	len = _printf("%S\n", " Best\nSc\bho\tol");
	_printf("len2 %d\n", len);
	printf("len2 %d\n", len);
	return (0);
}
