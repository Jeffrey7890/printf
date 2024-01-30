#include "../main.h"
#include <stdio.h>


int main(void)
{

	int number, neg_number, zero = 0;

	number = 12345;
	neg_number = -12234;

	_printnum(number);
	printf("\n");
	_printnum(neg_number);
	printf("\n");
	_printnum(zero);
	printf("\n");

	return (0);
}

