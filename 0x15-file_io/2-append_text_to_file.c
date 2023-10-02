#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t text_len, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	text_len = strlen(text_content);
	bytes_written = fwrite(text_content, 1, text_len, file);
	fclose(file);
	if (bytes_written != text_len)
	{
		return (-1);
	}
	return (1);
}
