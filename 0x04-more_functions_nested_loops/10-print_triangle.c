#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 *
 * Return: x triangle
 */
void print_triangle(int size)
{
	int x, e;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (e = 0 ; e < size ; e++)
			{
				if (e < size - (x + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
