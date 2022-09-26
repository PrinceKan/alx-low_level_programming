#include "main.h"
/**
 * _strchr - caracter locater in a string
 * @s: the area of the memory
 * @c: const byte
 *
 * Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
