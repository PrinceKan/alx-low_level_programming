#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fle, rd, wrt;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

/*OPENING*/
	fle = open(filename, O_RDONLY);

	if (fle == -1)
	{
		return (0);
	}

/*READING*/
	rd = read(fle, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}

/*WRITING*/
	wrt = write(STDOUT_FILENO, buffer, rd);
	if (wrt == -1)
	{
		return (0);
	}
	close(fle);

	return (wrt);
}
