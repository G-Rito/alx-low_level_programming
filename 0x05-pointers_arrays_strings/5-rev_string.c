#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: input string
 * return: string
 */

void rev_string(char *s)
{
char rvs = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
	counter++;
for (i = 0; i < counter; i++)
{
counter--;
rvs = s[i];
s[i] = s[counter];
s[counter] = rvs;
}
}
