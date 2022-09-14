#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alphabt;

	alphabt = 'a';

	while (alphabt <= 'z')
	{
		_putchar(alphabt);
		alphabt++;
	}
	_putchar('\n');
}
