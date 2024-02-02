#include "main.h"
#include <stdio.h>

/**
 * _s_write_line - write a string
 * @s: string to write
 * Return: length of string
 */
int _s_write_line(const char *s)
{
	int cnt = 0, ascii_num;

	while (*s != '\0')
	{
		ascii_num = *s;
		if ((0 < ascii_num && ascii_num < 32) || ascii_num >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (ascii_num < 16)
				_putchar('0');
			_printnum_flag(ascii_num, 16, 1);
		}
		else
			_putchar(*s);
		cnt++;
		s++;
	}
	return (cnt);
}
