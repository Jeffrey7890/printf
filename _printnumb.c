#include "main.h"

#define LEN_INT_MAX 20

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
		digit = (numb % base) + 0x30;
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
