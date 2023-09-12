#include <stdio.h>
/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size)
{
int i;
char c;
int offset = 0;

if (size <= 0)
printf("\n");
return;
while (offset < size)
printf("%08x ", offset);
for (i = 0; i < 10; i++)
if (i == 2 || i == 6)
printf(" ");
if (offset + i < size)
printf("%02x", (unsigned char)b[offset + i]);
else
printf("  ");
printf(" ");
for (i = 0; i < 10 && offset + i < size; i++)
c = b[offset + i];
if (c >= 32 && c <= 126)
printf("%c", c);
else
printf(".");
printf("\n");
offset += 10;
}
