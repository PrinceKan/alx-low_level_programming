#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: mirrorv -> rorrim
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;
	int length;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
