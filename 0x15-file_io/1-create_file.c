#include "main.h"

/**
 *create_file - function to creates a file
 *@filename: name of the file to create
 *@text_content: string to write
 *
 *Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, wr;
int j = 0;

fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
if (!filename)
return (-1);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[j])
j++;

wr = write(fd, text_content, j);
if (wr == -1)
return (-1);
}
close(fd);

return (1);
}
