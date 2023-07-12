#include "main.h"

/**
 * read_textfile - Read file text and print it to STDOUT
 *
 * @filename: file to be read
 *
 * @letters: number of letters to be read
 *
 * return:	w - actual number of bytes read and printed
 * 		0 - when reading fails or filname is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char)*letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
