#include "monty.h"

/**
 * main - main function for the monty interpreter prog
 * @argc: number of commands in command line
 * @argv: parsed commands;
 *
 * Return: Always SUCCESS.
*/
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }


    return (EXIT_SUCCESS);
}