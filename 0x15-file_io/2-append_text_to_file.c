#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: add content
 *
 * Return: 1 if the file exists. -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letcount;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letcount = 0; text_content[letcount]; letcount++)
			;

		rwr = write(file, text_content, letcount);

		if (rwr == -1)
			return (-1);
	}
	close(file);
	return (1);
}
