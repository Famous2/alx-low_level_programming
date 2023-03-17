#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char hex;
while (num < 16)
{
if (num < 10)
{
hex = num + '0';
}
else
{
hex = num + 87;
}
putchar(hex);
num++;
}
putchar('\n');
return (0);
}
