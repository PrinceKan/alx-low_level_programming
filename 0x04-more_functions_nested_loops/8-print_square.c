#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 *
 * Return: c square
 */
void print_square(int size)
{
	int s, l;

	if (size > 0)
	{
		for (s = 0 ; s < size ; s++)
		{
			for (l = 0 ; l < size ; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
