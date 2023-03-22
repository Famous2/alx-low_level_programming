#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
int i, j, result;
/* loop through the rows of the table */
for (i = 0; i <= 9; i++)
{
/* loop through the columns of the table */
for (j = 0; j <= 9; j++)
{
/* compute the result for this cell */
result = i * j;
/* print the result with padding */
if (j == 0)
{
_putchar('0');
}
else if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
/* add a separator between cells */
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
/* add a newline at the end of each row */
_putchar('\n');
}
}
