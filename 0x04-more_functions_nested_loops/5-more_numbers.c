#include "main.h"
/*
 * 5-more_numbers.c
 * Numbers consitute the only universal language in the world
 */

/**
 * more_numbers - Prints the numbers 0-14 ten times followed by a new line
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
