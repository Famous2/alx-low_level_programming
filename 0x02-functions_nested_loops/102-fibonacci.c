#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int fib1 = 1, fib2 = 2, next_fib;

printf("%ld, %ld", fib1, fib2);

for (i = 2; i < 50; i++)
{
next_fib = fib1 + fib2;
printf(", %ld", next_fib);

/* Update the Fibonacci numbers for the next iteration */
fib1 = fib2;
fib2 = next_fib;
}

printf("\n");
return (0);
}
