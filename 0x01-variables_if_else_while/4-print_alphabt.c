#include <stdio.h>
/**
 * main - Entry point
 *Description: Prints the alphabet in lowercase except q and e
 *Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++) /* Loop through a to z */
{
if (letter != 'q' && letter != 'e') /* Check if letter is q or e */
{
putchar(letter); /* Print the letter */
}
}
putchar('\n'); /* Print a new line */
return (0); /* Always return 0 to indicate success */
}
