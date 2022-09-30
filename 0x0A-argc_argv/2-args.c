#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 *
 *
 * Return: Always sucess
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0 ; s < argc ; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
