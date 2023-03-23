#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	if (year % 4 == 0)
	{
		days_in_month[2] = 29;
		if (year % 100 == 0)
		{
			days_in_month[2] = 28;
			if (year % 400 == 0)
			{
				days_in_month[2] = 29;
			}
		}
	}

    if (month < 1 || month > 12)
    {
        printf("Invalid date: Month value is invalid: %02d\n", month);
        return;
    }

    if (day < 1 || day > days_in_month[month])
    {
        printf("Invalid date: Day value is invalid: %02d\n", day);
        return;
    }

    int day_of_year = day;
    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }

    if (days_in_month[2] == 28 && month == 2 && day > 28)
    {
        printf("Invalid date: Day value is invalid for February: %02d\n", day);
        return;
    }

    if (days_in_month[2] == 29 && month == 2 && day > 29)
    {
        printf("Invalid date: Day value is invalid for February: %02d\n", day);
        return;
    }

    if (days_in_month[2] == 28 && month == 2 && day == 28)
    {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 365 - day_of_year);
        return;
    }

    if (days_in_month[2] == 29 && month == 2 && day == 29)
    {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 366 - day_of_year);
        return;
    }

    printf("Day of the year: %d\n", day_of_year);

    if (days_in_month[2] == 29 && month > 2)
    {
        printf("Remaining days: %d\n", 366 - day_of_year);
    }
    else
    {
        printf("Remaining days: %d\n", 365 - day_of_year);
    }
}
