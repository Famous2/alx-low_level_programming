#include <stdio.h>

/**
 * main - Prints the sum of even-valued terms in the Fibonacci sequence
 *        up to a limit of 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int fib1 = 1, fib2 = 2, next_fib, sum = 2;
printf("%ld, %ld", fib1, fib2);
for (i = 2; i < 50; i++)
{
next_fib = fib1 + fib2;
printf(", %ld", next_fib);
if (next_fib % 2 == 0)
sum += next_fib;
fib1 = fib2;
fib2 = next_fib;
}
printf("\n%ld\n", sum);
return (0);
}
