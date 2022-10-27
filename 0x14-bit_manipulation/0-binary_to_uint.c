#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: the convertd number or 0 if b is NULL or different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int extent, i, sum;

	sum = 0;

	if (b != NULL)
	{
		extent = 0;
		while (b[extent] != '\0')
		{
			if (b[extent] != 48 && b[extent] != 49)
			{
				return (0);
			}
			extent++;
		}

		for (i = 0, extent-- ; extent >= 0 ; extent--)
		{
			sum = sum + ((b[extent] - '0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}
