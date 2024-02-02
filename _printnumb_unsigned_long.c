#include "main.h"

#define LEN_INT_MAX 20

/**
 * _printnum_flag - converts number to string and prints to scree
 * @numb: number to be printed
 * @base: base to print number in
 * @f_case: 1 for uppercase in hex
 * Return: lenght of string printed
 */
int _printnum_ul(unsigned long numb, int base, int f_case)
{
	char str_numb[LEN_INT_MAX], digit;
	int i = LEN_INT_MAX - 1;

	str_numb[i] = '\0';
	i--;

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		digit = check_hex_flag(numb % base, f_case);
		str_numb[i] = digit;
		numb = numb / base;
		i--;
	}
	return (_write_line(str_numb + i + 1));
}
