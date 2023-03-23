#include "main.h"
/**
 * mul - multiply 2 int
 * @a: first int
 * @b: second int
 *
 * Return: addition of the multiplication
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
