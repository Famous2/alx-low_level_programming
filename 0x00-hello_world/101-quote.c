#include <unistd.h>
/**
 * main - Entry point of the program
 * Description: Prints a message to the standard error
 * Return: Always 1
 */
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
/* write the message to standard error */
write(2, msg, 59);
return (1);
}
