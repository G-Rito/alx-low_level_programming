#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int r;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[i] = src[r];
		i++;
		r++;
	}

	dest[i] = '\0';
	return (dest);
}

