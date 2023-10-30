#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: the text to append to the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, ret_val, text_len;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
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

