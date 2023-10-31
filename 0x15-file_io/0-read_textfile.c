#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Show the contents of the text file on the standard output
 * Return: w- the actual number of bytes read and printed
 * @letters: Quantity of letters to be read
 * @filename: Text file that is being read
 *        returns 0 if the function fails or if the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf;
        ssize_t fd;
        ssize_t w;
        ssize_t t;

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buf = malloc(sizeof(char) * letters);
        t = read(fd, buf, letters);
        w = write(STDOUT_FILENO, buf, t);

        free(buf);
        close(fd);
        return (w);
}

