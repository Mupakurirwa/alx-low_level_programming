#include "main.h"
/*
 * 8-print_square.c
 * You are so much sunshine in every square inch
 */

/**
 * print_square - Prints a square followed by a new line using the character #.
 * @size: The size of the square.
 * if size is 0 or less, the function will only print a new line
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
