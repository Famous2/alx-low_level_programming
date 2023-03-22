#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 * Return: void
 */
void print_to_98(int n)
{
int i;
/* check if n is less than or equal to 98 */
if (n <= 98)
{
/* loop from n to 98 */
for (i = n; i <= 98; i++)
{
/* print the current number */
printf("%d", i);
/* print a comma and space if the current number is not 98 */
if (i != 98)
{
printf(", ");
}
}
}
else
{
/* loop from n to 98 */
for (i = n; i >= 98; i--)
{
/* print the current number */
printf("%d", i);
/* print a comma and space if the current number is not 98 */
if (i != 98)
{
printf(", ");
}
}
}
/* print a newline character */
printf("\n");
}
