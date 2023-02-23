/*
 * The shortest distance between two points is a staright line
 *
 */

/**
 * print_line - Draws a straight line in the terminal using the character _.
 * @n: The number of _ characters to be printed.
 * the line should end with \n
 * if n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
