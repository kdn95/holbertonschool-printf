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
va_list input_list;
int i;
i = 0;
if (format == NULL)
return (-1);
va_start(input_list, format);
while (*format != '\0')
{
if (*format != '%')
{
write(1, format, 1);
i++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
i++;
}
else if (*format == 'c')
{
char c = (char)va_arg(input_list, int);
write(1, &c, 1);
i++;
}
else if (*format == 's')
{
char *str = va_arg(input_list, char *);
int str_len = 0;
while (str[str_len] != '\0')
str_len++;
write(1, str, str_len);
i += str_len;
}
}
format++;
}
va_end(input_list);
return (i);
}
