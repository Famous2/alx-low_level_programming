#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by comma and space, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned int fib1 = 1, fib2 = 2, next_fib;
printf("%u, %u", fib1, fib2);
for (count = 3; count <= 98; count++)
{
next_fib = fib1 + fib2;
printf(", %u", next_fib);
fib1 = fib2;
fib2 = next_fib;
}
printf("\n");
return (0);
}
