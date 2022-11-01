#include "main.h"
#include <stdio.h>

/**
 * main - content of a file copier to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int flef, flet, rd, wrt;
	char buffer[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	flef = open(argv[1], O_RDONLY);
	if (flef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	flet = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (flet == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((rd = read(flef, buffer, 1024)) != 0)
	{
		if (rd == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wrt = write(flet, buffer, rd);
		if (wrt == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(flef) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flef), exit(100);
	}
	if (close(flet) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flet), exit(100);
	}
	return (0);
}
