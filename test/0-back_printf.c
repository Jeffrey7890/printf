#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


int _format_logic(va_list ap, const char *format, int *cnt)
{
	char c;

	while ((c = *format) != '\0')
	{
		(*cnt)++;
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
				*cnt += _write_line((char*)va_arg(ap, char *)) - 1;
				break;
			case 'd':
				cnt += _printnum(va_arg(ap, int)) - 1;
				break;
			case 'i':
				*cnt += _printnum(va_arg(ap, int)) - 1;
				break;
			case '%':
				_putchar('%');
				break;
			default:
				return (-1);
		}
	}
	return (*cnt);
}


/**
 * _printf - my implementation of printf function
 * @format: format string to print
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	int cnt = 0;
	va_list ap, ap_copy;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	va_copy(ap_copy, ap);

	_format_logic(ap_copy, format, &cnt);

	va_end(ap_copy);
	va_end(ap);
	return (cnt);
}
