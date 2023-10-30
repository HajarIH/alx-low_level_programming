#include "main.h"

/**
 * main: copies a file to another file
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error;
	ssize_t number, a;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
                exit(99);
        }
	number = 1024;
	while (number == 1024)
	{
		number = read(file_from, buff, 1024);
		if (number == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		a = write(file_to, buff, number);
		if (a == -1)
                {
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
                        exit(99);
                }
	}
	error = close(file_from);
	if (error == -1)
		{
                        dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
                        exit(100);
                }
	error = close(file_to);
        if (error == -1)
                {
                        dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
                        exit(100);
                }
	return (0);
}
