#include"main.h"
#include <unistd.h>
/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 * _putchar -writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void _putchar(char c)
{
write(1, &c, 1);
}
void print_number(int n)
{
int divisor;
int num;

if (n < 0)
{
_putchar('-');
n = -n;
}
divisor = 1;
num = n;

while (num / divisor > 9)
{
divisor *= 10;

}
while (divisor > 0)
{
int digit = num / divisor;
_putchar(digit + '0');
num %= divisor;
divisor /= 10;
}
}

