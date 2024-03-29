#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

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
	va_list ap;

	if (format == NULL)
		return (-1);

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
			case 'S':
				s = (char *)va_arg(ap, char *);
				cnt += _s_write_line(s) - 1;
				break;
			case 'd':
				cnt += _printnum(va_arg(ap, int), 10) - 1;
				break;
			case 'i':
				cnt += _printnum(va_arg(ap, int), 10) - 1;
				break;
			case 'b':
				cnt += _printnum(va_arg(ap, int), 2) - 1;
				break;
			case 'o':
				cnt += _printnum_flag(va_arg(ap, int), 8, 0) - 1;
				break;
			case 'x':
				cnt += _printnum_flag(va_arg(ap, int), 16, 0) - 1;
				break;
			case 'X':
				cnt += _printnum_flag(va_arg(ap, int), 16, 1) - 1;
				break;
			case 'u':
				cnt += _printnum_flag(va_arg(ap, int), 10, 1) - 1;
				break;
			case 'p':
				cnt += _write_line("0x");
				cnt += _printnum_ul((unsigned long)va_arg(ap, void *),16,0) - 1;
				break;
			case '%':
				_putchar('%');
				break;
			default:
				return (-1);
		}
	}
	va_end(ap);
	return (cnt);
}
