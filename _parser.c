#include "main.h"
/**
 * parser - receive main str and fmt specs to print fmt str
 * @format: str with required chars
 * @prf_list: all functions req
 * @arg_list: all args
 * Return: count all chars printed
 */
int parser(const char *format, prf_t prf_list[], va_list arg_list)
{
int i, j, a_val, printed_char;
printed_char = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; prf_list[j].oprt != NULL; j++)
{
if (format[i + 1] == f_list[j].sym[0])
{
a_val = prf_list[j].f(arg_list);
if (a_val == -1)
return (-1);
printed_char += a_val;
break;
}
}
if (prf_list[j].oprt == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_writechar(format[i]);
_writechar(format[i + 1]);
printed_char = printed_char + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_writechar(format[i]);
printed_char++;
}
}
return (printed_char);
}
