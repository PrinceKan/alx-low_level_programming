#include "main.h"
/**
 * print_line -draws a straight line in the terminal
 * @n: the number of times that the special character must b    e printed
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int l = 1;

	while (l <= n)
	{
		_putchar(95);
		l++;
	}
	_putchar('\n');
}
