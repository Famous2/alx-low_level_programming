#include "main.h"
/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
int result = 0;
int i;

if (b < 0)
{
a = -a;
b = -b;
}

for (i = 0; i < b; i++)
{
result += a;
}

return (result);
}
