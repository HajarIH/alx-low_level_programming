#include "main.h"

/**
 * read_textfile: a function that reads a text file and prints it to the POSIX standard output
 * @filename: the file
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, number;
	char *buff;

	if (!filename)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	b = read(a, buff, letters);
	number = write(STDOUT_FILENO, buff, b);
	close(a);
	free(buff);
	return (number);
}
