#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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

/**
 * _printf - my implementation of printf function
 * @format: format string to print
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	char c;
	int cnt = 0;
	char *s;

	if (format == NULL)
		return (-1);

	va_list ap;

	va_start(ap, format);

	while ((c = *format) != '\0')
	{
		cnt++;
		if (c != '%')
		{
			_putchar(c);
			format++;
			continue;
		}

		format++;

		/* Handle c, s, % */
		switch (c = *format++)
		{
			case 'c':
				c = (char)va_arg(ap, int);
				_putchar(c);
				break;
			case 's':
				s = (char *)va_arg(ap, char *);
				cnt += _write_line(s) - 1;
				break;
		}
	}
	va_end(ap);

	return (cnt);
}
