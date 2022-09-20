#include "main.h"
/**
 * rev_string - reverses a string
 * @s: is the pointer -> si eht retniop
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char t;
	int l;

	while (s[j] != '\0')
	{
		j++;
	}

	l = i;
	i = 0;
	j = l - 1;

	while (i < j/2)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
