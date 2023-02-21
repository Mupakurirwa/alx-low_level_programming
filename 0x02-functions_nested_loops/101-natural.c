#include <stdio.h>
/*
 * 101-natural.c
 * nature made natural numbers, all else is the work of women
 */

/**
 * main - program that computes the sum of all multiples of 3 and 5
 * main - Lists all the natural numbers below 1024 that were excluded
 * Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
