#include "main.h"

/**
*read_textfile - reads a text file and prints it
*to the POSIX standard output.
*@filename: pointer name of the file
*@letters: number of letters
*Return: 0 if not opened, 0 if filename is null and 0 if doesnt write
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;

char *buf;

if (!filename)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buf, letters);
w = write(STDOUT_FILENO, buf, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buf);
return (0);
}

free(buf);
close(o);

return (w);
}

