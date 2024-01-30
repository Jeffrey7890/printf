#include "../main.h"
#include <stdio.h>


int main(void)
{

	int number, neg_number, zero = 0;

	number =98; 
	neg_number = -12234;

	_printnum(number, 0x30);
	printf("\n");
	_printnum(neg_number, 2);
	printf("\n");
	_printnum(zero, 10);
	printf("\n");

	return (0);
}

