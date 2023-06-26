#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length
 */

int _strlen(char *s)
{
int botelle = 0;

while (*s != '\0')
{
botelle++;
s++;
}
return (botelle);
}
