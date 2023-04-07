#include "main.h"

/**
* append_text_to_file - the function appends text at the end of a file
* @filename: name of the file
* @text_content: The string to add to the end of the file
*
* Return: If the function fails or filename is NULL - -1
*
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o, w;
int k;

if (!filename)
return (-1);

if (text_content != NULL)
{
for (k = 0; text_content[k]; k++)
;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, k);

if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}
