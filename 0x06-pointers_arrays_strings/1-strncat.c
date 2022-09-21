#include "main.h"
/**
* _strncat - fonction that concatenates two strings
* @dest: is an input parameter string
* @src: is an input parameter string
* @n: times to iterate
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int w;

	h = 0;

	while (dest[h] != 0)
	{
		h++;
	}

	w = 0;

	while (src[w] != 0 && w < n)
	{
		dest[h] = src[w];
		h++;
		w++;
	}
	return (dest);
}
