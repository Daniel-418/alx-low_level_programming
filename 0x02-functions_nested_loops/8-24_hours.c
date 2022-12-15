#include "main.h"
/**
  * jack_bauer - Prints every minute of the day
  * @void: this function takes no arguments
  *
  * Return: This function returns no value
  */
void jack_bauer(void)
{
	int hour, minute, tohour, tominute, uohour, uominute;

	for (hour = 0; hour < 24; hour++)
	{
		tohour = hour / 10;
		uohour = hour % 10;

		for (minute = 0; minute < 60; minute++)
		{
			tominute = minute / 10;
			uominute = minute % 10;

			_putchar(tohour + '0');
			_putchar(uohour + '0');
			_putchar(':');
			_putchar(tominute + '0');
			_putchar(uominute + '0');
			_putchar('\n');
		}
	}
}
