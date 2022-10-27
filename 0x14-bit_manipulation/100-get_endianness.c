#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 such a large endian or 1 such a small endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *m = (char *)&i;

	if (*m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
