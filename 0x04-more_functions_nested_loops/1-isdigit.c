#include "main.h"

/**
 * -isdigit - Checks for digits
 *  @c: character to be checked
 *  Return: 1 for digit or 0 for other
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
