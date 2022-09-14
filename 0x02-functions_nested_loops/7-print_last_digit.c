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
		l_d = ld % 10;
		_putchar(ld + '0');
	}
	else
	{
		ld = ld % 10 * -1;
		_putchar(l_d + '0');
	}
	return (l_d);
}
