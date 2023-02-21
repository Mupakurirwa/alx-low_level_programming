#include "main.h"
/*
 * File: 7-print_last_digit.c
 * 3 colors, 10 digits and 7 notes. Its what we do with them that is important
 */

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
