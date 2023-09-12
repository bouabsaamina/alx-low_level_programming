#include <stdio.h>
#include <string.h>
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int index = 0;
int i;
int j;
int start = 0;
int end;
int digit;

if (len1 + len2 + 1 > size_r)
{
return (0);
}
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
digit = sum % 10;

r[index++] = digit + '0';
}
r[index] = '\0';
end = index - 1;
while (start < end)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
start++;
end--;
}
return (r);
}
