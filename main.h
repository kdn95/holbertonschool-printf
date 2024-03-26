#ifndef _PRINT_F
#define _PRINT_F
#include <stdarg.h>
/**
 * struct prf - struct printf
 * @spf: the fmt specifier
 * @f: function associated
 */
typedef struct prf
{
char *spf;
int (*f)(va_list);
} prf_t;


int _printf(const char *format, ...);

#endif
