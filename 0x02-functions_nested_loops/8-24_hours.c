#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
int hour, minute;
/* loop through all the hours of the day */
for (hour = 0; hour <= 23; hour++)
{
/* loop through all the minutes of each hour */
for (minute = 0; minute <= 59; minute++)
{
/* print the hour and minute in the correct format */
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
