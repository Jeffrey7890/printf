#include "main.h"

#define LEN_INT_MAX 20

/**
 * check_hex_flag - checks hex number
 * @n: number to check for
 * @flag: 1 to indicate upper case
 * Return: character
 */
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
			return ('C');
		return ('c');
	}
	else if (n == 13)
	{
		if (flag == 1)
			return ('D');
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
 * _printnum_flag - converts number to string and prints to scree
 * @numb: number to be printed
 * @base: base to print number in
 * @f_case: 1 for uppercase in hex
 * Return: lenght of string printed
 */
int _printnum_flag(unsigned int numb, int base, int f_case)
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
