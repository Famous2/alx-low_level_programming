#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
/* get the last digit of n */
last_digit = abs(n % 10);
/* print the last digit */
_putchar(last_digit + '0');
/* return the value of the last digit */
return (last_digit);
}
