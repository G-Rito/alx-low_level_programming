#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: input string
 * return: 0
 */

void print_rev(char *s)
{
int botelle = 0;
int i;

while (*s != '\n')
{
botelle++;
s++;
}
s--;
for (i = botelle; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
