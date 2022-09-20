#include "main.h"
/**
 * rev_string - reverses a string
 * @s: mirrorv -> rorrim
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char t;
	int l;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;
	i = 0;
	j = l - 1;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
