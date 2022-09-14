#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @l_d: the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int l_d)
{
	if (l_d > 0)
	{
		l_d = l_d % 10;
		_putchar(l_d + '0');
	}
	else
	{
		l_d = l_d % 10 * -1;
		_putchar(l_d + '0');
	}
	return (l_d);
}
