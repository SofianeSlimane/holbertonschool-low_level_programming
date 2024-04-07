#include "main.h"




ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;

	char *buf;

	fd = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * letters);

	rd = read(fd, buf, letters);

	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	return (rd);
}

