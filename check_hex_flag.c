#include "main.h"

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
