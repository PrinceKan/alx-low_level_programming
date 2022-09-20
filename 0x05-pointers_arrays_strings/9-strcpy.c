#include "main.h"
/**
 * _strcpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int c;

	while (src[n] != '\0')
	{
		n++;
	}

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	c = c;
	while (c <= n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
