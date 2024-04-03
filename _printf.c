#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
/**
 * _printf - simple printf function
 * @format: format specifiers as char
 * Return: input
 */
int _printf(const char *format, ...)
{
int printed_char;
prf_t prf_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
printed_char = parser(format, prf_list, arg_list);
va_end(arg_list);
return (printed_char);
}
