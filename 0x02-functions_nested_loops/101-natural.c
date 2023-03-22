#include <stdio.h>

/**
 * main - List all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);
return (0);
}
