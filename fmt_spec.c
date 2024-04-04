#include "main.h"
/**
 * print_char - print chars
 * @list: list of args
 * Return: return amt of chars printed
 */
int print_char(va_list list)
{
_writechar(va_arg(list, int));
return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
int i;
char *str;
str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_writechar(str[i]);
return (i);
}
/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
_writechar('%');
return (1);
}

/**
 * print_integer - Print an integer
 * @list: list of arguments
 *
 * Return: Number of characters printed
 */

int print_integer(va_list list)
{
int len;
unsigned int num;
int n = va_arg(list, int);
int divisor;
divisor = 1;
len = 0;
if (n < 0)
{
len += _writechar('-');
num = n * -1;
}
else
num = n;
while (num / divisor > 9)
divisor *= 10;
while (divisor != 0)
{
len += _writechar((num / divisor) + '0');
num %= divisor;
divisor /= 10;
}
return (len);
}
