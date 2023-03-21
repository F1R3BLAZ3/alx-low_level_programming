#include "main.h"

/**
  *jack_bauer - Prints every minute of the day of
  *             Jack Bauer, starting from 00:00 to 23:59.
  */

void jack_bauer(void)
{
	int hh, h, mm, m;

	for (hh = 0; hh <= 2; hh++)
	{
		for (h = 0; h <= 9; h++)
		{
			if ((hh <= 1 && h <= 9) || (hh <= 2 && h <= 3))
			{
				for (mm = 0; mm <= 5; mm++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(hh + '0');
						_putchar(h + '0');
						_putchar(58);
						_putchar(mm + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
