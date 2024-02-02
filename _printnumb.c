#include "main.h"

#define LEN_INT_MAX 20

char check_hex(int n)
{
	if (n == 10)
		return ('a');
	else if (n == 11)
		return ('b');
	else if (n == 12)
		return ('c');
	else if (n == 13)
		return ('d');
	else if (n == 14)
		return ('e');
	else if (n == 15)
		return ('f');
	return (n + 0x30);
}


/**
 * _printnum - converts number to string and prints to scree
 * @numb: number to be printed
 * Return: lenght of string printed
 */
int _printnum(int numb, int base)
{
	char str_numb[LEN_INT_MAX], digit;
	int i = LEN_INT_MAX - 1, flag = 1;

	str_numb[i] = '\0';
	i--;

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	if (numb < 0)
	{
		numb *= -1;
		flag *= -1;
	}

	while (numb != 0)
	{
		digit = check_hex(numb % base);
		str_numb[i] = digit;
		numb = numb / base;
		i--;
	}

	if (flag < 0)
	{
		str_numb[i] = '-';
		i--;
	}
	return (_write_line(str_numb + i + 1));
}
