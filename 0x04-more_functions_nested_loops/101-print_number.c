#include "main.h"

/**
 * print_number - Prints integer.
 * @n: The integer to be printed.
 * _putchar function is used
 * no arrays, pointers or long can be used
 * hard-code special values not also allowed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
