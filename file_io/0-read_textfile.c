#include "main.h"
/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;
	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if(r == -1 || w == -1 || o == -1 || r != w)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);

	return (w);
}
