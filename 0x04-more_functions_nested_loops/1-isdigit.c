#include "main.h"
/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
