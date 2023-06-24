#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int r, h, i;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (r = 1; r <= size; r++)
{
for (i = size - r; i >= 1; i--)
{
_putchar (' ');
}
for (h = 1; h <= r; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
