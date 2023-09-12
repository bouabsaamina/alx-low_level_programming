#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	printf("\n");
	return (0);
}
