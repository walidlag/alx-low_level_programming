#include "main.h"

/**
 * append_text_to_file - Adds text to the conclusion of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to append to the end of the file
 *
 * Return: - -1 in case of function failure or a NULL filename
 *         - -1 if the file doesn't exist or the user lacks write permissions
 *         Otherwise: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int o, w, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        o = open(filename, O_WRONLY | O_APPEND);
        w = write(o, text_content, len);

        if (o == -1 || w == -1)
                return (-1);

        close(o);

        return (1);
}

