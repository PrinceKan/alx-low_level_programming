#include "main.h"
/**
 * print_diagonal -draws a diagonal line on the terminal
 * @n: the number of times that the special character must b    e print
 *
 * Return: d diagonal
 */
void print_diagonal(int n)
{
	int d, o;

	if (n > 0)
	{
		for (d = 0 ; d < n ; d++)
		{
			for (o = 0 ; o < d ; o++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
