#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times to print the times table
 * This function prints the n times table, starting with 0. It only prints
 * the table if n is between 0 and 100 (inclusive).
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 100)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
printf("%d", i * j);
}
else
{
printf(" %d", i * j);
}
}
printf("\n");
}
}
