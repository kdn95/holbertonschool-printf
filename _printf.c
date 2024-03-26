#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 */
int _printf(const char *format, ...)
{
prf_t prf_s[] = {
{"%", prf_pct},
{"c", prf_char},
{"s", prf_str},
{"d", prf_int},
{"i", prf_int},
{NULL, NULL},
};
va_list input_list;
va_start(input_list, format);
if (format == NULL)
{
return (-1);
}
