#include <stdio.h>
/*
 * 102-fibonacci.c
 * FIBONACCI SERIES IS FUN
 */

/**
 * main - 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 * making use of the standard library
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
