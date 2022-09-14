#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphabt;
	int counting;

	counting = 0;

	while (counting <= 9)
	{
		alphabt = 'a';
		while (alphabt <= 'z')
		{
			_putchar(alphabt);
			alphabt++;
		}
		counting++;
		_putchar('\n');
	}
}
