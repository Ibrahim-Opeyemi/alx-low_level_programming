#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * This function prints every minute of the day in the format "HH:MM" where HH is the hour (00 to 23) and MM is the minute (00 to 59).
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
