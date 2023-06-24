#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
unsigned long int i, r = 612852475143;

for (i = 3; i < 782849; i = i + 2)
{
while ((r % i == 0) && (r != i))
r = r / i;
}
printf("%lu\n", r);
return (0);
}
