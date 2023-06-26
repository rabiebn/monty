#include "monty.h"

/* ##### parsing entry functions ##### */

/**
 * open_file - opens file.
 * @file_name: name of the file.
 *
 * Return: FILE pointer, NULL otherwise
*/
FILE *open_file(char *file_name)
{
    FILE *fp;

    fp = fopen(file_name, "r");
    if (!fp)
    {
        fprintf(stderr, "Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }

    return (fp);
}

/**
 * parse_file - reads line off the opcode file.
 * @file_name: file name.
 * @line_number: line number starting at 1.
 *
 * Return: line as a string.
*/
char **parse_file(char *file_name)
{
    FILE *fp = open_file(file_name);
    char **lineZ = malloc(sizeof(char *) * sizeof(fp));
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int i = 0;

    if (!lineZ)
    /* MALLOC ERROR */
        exit(EXIT_FAILURE);

    while (read != -1)
    {
        read = getline(&line, &len, fp);
        *(lineZ + i) = line;
        i++;
    }

    fclose(fp);
    return lineZ;
}

/**
 * parse_line - parses line in opcode file.
 * @line_number: line number.
 *
 * 
*/
char **parse_line()
{
    return NULL;
}