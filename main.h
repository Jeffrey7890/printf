#ifndef __MY_PRINTF__
#define __MY_PRINTF__

int _printf(const char *format, ...);
int _putchar(char c);
int _write_line(char *s);
int _printnum(int numb, int base);
int _s_write_line(const char *s);
int _printnum_flag(int numb, int base, int f_case);
int _printbin(int numb);

#endif
