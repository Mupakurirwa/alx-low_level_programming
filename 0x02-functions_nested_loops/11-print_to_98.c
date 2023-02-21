#include <stdio.h>
/*
 * 11-print_to_98.c
 * 98 Battery Street, the OG
 */

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *               in order separated by a comma followed by a space.
 *               numbers should be printed in order
 *               the last printed number should be 98
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
