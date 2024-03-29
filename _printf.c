#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - simple printf function
 * @format: format specifiers as char
 * Return: input
 */
int _printf(const char *format, ...)
{
va_list input_list;
int i;
i = 0;
if (format == NULL)
{
return (-1);
}
va_start(input_list, format);
while (*format != '\0')
{
if (*format != '%')
{
_putchar(*format);
i++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
putchar('%');
i++;
}
else if (*format == 'c')
{
char c = (char)va_arg(input_list, int);
_putchar(c);
i++;
}
else if (*format == 's')
{
char *str = va_arg(input_list, char *);
size_t str_len = _strlen(str);
size_t j = 0;
while (j < str_len)
{
_putchar(str[j]);
i++;
j++;
}
}
}
format++;
}
va_end(input_list);
return (i);
}
