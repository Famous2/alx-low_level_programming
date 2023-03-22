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
long int fib1 = 1, fib2 = 2, next_fib, sum = 0;
while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
sum += fib2;
next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}
printf("%ld\n", sum);
return (0);
}
