#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;

if (n == 0)
return (0);

va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
