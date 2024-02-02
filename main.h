#ifndef __MY_PRINTF__
#define __MY_PRINTF__

int _printf(const char *format, ...);
int _putchar(char c);
int _write_line(char *s);
int _printnum(int numb, int base);
char check_hex(int n);
char check_hex_flag(int n, int flag);
int _s_write_line(char *s);
int _printnum_flag(unsigned int numb, int base, int f_case);

#endif
