#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: argument vector for values
 * @argc: argument count
 *
 * Return: Always  (Success - 0)
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1); /*if error is detected*/
	}
	return (0);
}
