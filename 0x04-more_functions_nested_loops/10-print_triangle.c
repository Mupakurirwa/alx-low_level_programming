#include "main.h"
/**
 * print_triangle - Printing of  a triangle making use of #.
 * @size: The size of the triangle.
 * if size is 0 or less the function will print only a new line
 * _putchar is only being used for this triangle
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
