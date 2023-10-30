#include "main.h"
/**
 * read_textfile - reada atext file and prints it ro the POSIX standard
 * output
 * @filename: file to be accesssed
 * @letters: number of letter to read and print
 * Return: actual number of letter read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t bytes_read;
	char *buffer;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	bytes_read = read(file, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file);
	free(buffer);
	return (bytes_written);
}
