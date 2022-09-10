#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints random number to variable
 *
 * Return: Alway (Succesful)
 */
int main(void)
{
	int n;
<<<<<<< HEAD
	char last[] = "last digit of";
=======
>>>>>>> 5d928ba8163e1a20c9f47fdf85fc277d8f8880ea

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%s %d is %d and is", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 ans not 0\n");
	}
	return (0);
}
