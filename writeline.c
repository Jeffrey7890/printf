#include "main.h"
#include <stdio.h>

/**
 * _write_line - write a string
 * @s: string to write
 * Return: length of string
 */
int _write_line(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		cnt++;
		s++;
	}
	return (cnt);
}
