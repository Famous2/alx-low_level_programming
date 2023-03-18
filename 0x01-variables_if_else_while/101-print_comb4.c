#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++) /* Loop through first digit */
{
for (j = i + 1; j < 9; j++) /* Loop through second digit */
{
for (k = j + 1; k < 10; k++) /* Loop through third digit */
{
/* Print digits separated by commas */
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
/* If not last combination, print comma and space */
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n'); /* Print newline */
return (0);
}
