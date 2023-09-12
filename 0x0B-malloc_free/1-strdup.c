#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *co;
	int i, k = 0;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
		k++;

	co = (char *)malloc((sizeof(char) * k) + 1);
	if (co == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		co[i] = str[i];
	co[k] = '\0';

	return (co);
}
