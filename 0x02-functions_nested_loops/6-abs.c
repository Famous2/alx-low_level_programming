#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 * Return: the absolute value of n
 */
int _abs(int n)
{
/* check if n is negative */
if (n < 0)
{
/* negate n to get its absolute value */
n = -n;
}
/* return n, which is now the absolute value of the input integer */
return (n);
}
