#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: must be checked
 * Return: 1 for uppercase or 0 for other
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
