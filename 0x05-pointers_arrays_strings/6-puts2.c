#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 */
void puts2(char *str)
{
	int e;
	int o;

	for (e = 0 ; str[e] != '\0' ; e++)
	{
		;
	}
	for (o = 0 ; o < e ; o = o + 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
