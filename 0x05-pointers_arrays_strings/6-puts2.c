#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string
 * Return: string
 */

void puts2(char *str)
{
int lng = 0;
int i = 0;
char *s = str;
int r;

while (*s != '\0')
{
s++;
lng++;
}
i = lng - 1;
for (r = 0; r <= i; r++)
{
if (r % 2 == 0)
{
_putchar(str[r]);
}
}
_putchar('\n');
}
