#include "main.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';;

	do
	{
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}


/**
  * _printf - my own printf function
  * @format: format string
  * @...: multiple args
  * Return: number of char printed, except /0
  */
int _printf(const char *fmt, ...)
{
	const char *temp;

	int i, size, len = 0;

	char *s;

	va_list ap;

	va_start(ap, fmt);
	for (temp = fmt; *temp != '\0'; temp++)
	{
		len++;
		if (*temp == '%')
		{
			temp++;
			switch (*temp)
			{
				case 'c':
					i = va_arg(ap, int);
					write(1, &i, 1);
					len++;
					break;
				case 's':
					s = va_arg(ap, char *);
					size = strlen(s);
					write(1, s, size);
					len+= size;
					break;
				case 'i':
					s = convert(va_arg(ap, int),10);
					size = strlen(s);
					write(1, s, size);
					len+= size;
					break;
			}
			temp++;
		}

		write(1, temp, 1);
	}
	va_end(ap);

	return (len);
}
