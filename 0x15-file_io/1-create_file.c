#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writen on file
 *
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int letcount;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letcount = 0; text_content[letcount]; letcount++)
		;

	rwr = write(file, text_content, letcount);

	if (rwr == -1)
		return (-1);

	close(file);

	return (-1);
}
