#ifndef _PRINT_F
#define _PRINT_F
#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct prft - struct of prft functions
 * @oprt: operator
 * @f: function related
 */
struct prft
{
	char *oprt;
	int (*f)(va_list);
};
typedef struct prft prf_t;

/*Main functions*/
int parser(const char *format, prf_t prf_list[], va_list arg_list);
int _printf(const char *format, ...);
int _writechar(char);
int print_char(va_list);
int print_string(va_list);
#endif
