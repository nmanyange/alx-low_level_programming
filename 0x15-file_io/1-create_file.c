#include "main.h"

/**
* create_file - creates a file with specific permissions and writes text to it
* @filename: the name of the file to create
* @text_content: the text to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, ret_val, text_len;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content == NULL)
{
close(fd);
return (1);
}

for (text_len = 0; text_content[text_len] != '\0'; text_len++)
continue;

ret_val = write(fd, text_content, text_len);

if (ret_val == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
