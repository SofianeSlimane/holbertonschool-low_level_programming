#include "main.h"
/**
 * read_textfile - reads the content of a file and prints to stdout
 * @filename: string that holds the name of the file we want to read from
 * @letters: number of characters to read in the file
 * Return: the numbers of bytes (characters) read
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (rd);
}
