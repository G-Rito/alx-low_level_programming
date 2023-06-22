#include "main.h"

/**
 * print_square - prints a square
*@size: size of the square
*Return: void
*/
void print_square(int size)
{
int i, r;
if (size <= 0)
	_putchar('\n');
for (i = 0; i < (size); i++)
{
	for (r = 0; r < (size); r++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
