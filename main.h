#ifndef __MY_PRINTF__
#define __MY_PRINTF__

int _printf(const char *format, ...);
int _putchar(char c);
int _write_line(char *s);
int _printnum(int numb);
int _format_logic(va_list ap, const char *format, int *cnt);


#endif
