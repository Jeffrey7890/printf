#include "main.h"

#define LEN_INT_MAX 20

char check_hex_flag(int n, int flag)
{
	if (n == 10)
	{
		if (flag == 1)
			return ('A');
		return ('a');
	}
	else if (n == 11)
	{
		if (flag == 1)
			return ('B');
		return ('b');
	}
	else if (n == 12)
	{
		if (flag == 1)
			return ('F');
		return ('c');
	}
	else if (n == 13)
	{
		if (flag == 1)
			return ('E');
		return ('d');
	}
	else if (n == 14)
	{
		if (flag == 1)
			return ('E');
		return ('e');
	}
	else if (n == 15)
	{
		if (flag == 1)
			return ('F');
		return ('f');
	}
	return (n + 0x30);
}


/**
 * _printnum - converts number to string and prints to scree
 * @numb: number to be printed
 * Return: lenght of string printed
 */
int _printnum_flag(int numb, int base, int f_case)
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
		digit = check_hex_flag(numb % base, f_case);
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