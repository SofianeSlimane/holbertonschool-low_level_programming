#include "main.h"
/**
 * create_file - creates a file
 * @filename: strings that holds the name of the file we want to create
 * @text_content: content that will written in the file
 * Return: Either 1 on success or -1 on failure
 */






int create_file(const char *filename, char *text_content)
{
	int fd, wr, length;


	if (filename == NULL || text_content)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}
	wr = write(fd, text_content, length);
	
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
