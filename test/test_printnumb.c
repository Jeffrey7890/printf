#include "../main.h"
#include <stdio.h>


int main(void)
{

	int number, neg_number, zero = 0;

	number =052; 
	neg_number = 0x32;

	_printnum(number, 2);
	printf("\n");
	_printnum(neg_number, 2);
	printf("\n");
	_printnum(zero, 10);
	printf("\n");

	return (0);
}

