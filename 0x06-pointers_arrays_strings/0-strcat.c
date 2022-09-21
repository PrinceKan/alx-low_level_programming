#include "main.h"
/**
 * _strcat - fonction that concatenates two strings
 * @dest: is an input parameter string
 * @src: is an input parameter string
 *
 * Return: dest (success)
 */
char *_strcat(char *dest, char *src)
{
	int h;
	int w;

	h = 0;

	while (dest[h] != 0)
	{
		h++;
	}

	w = 0;

	while (src[w] != 0)
	{
		dest[h] = src[w];
		h++;
		w++;
	}
	return (dest);
}
