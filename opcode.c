#include "monty.h"

/**
 * push - pushes an element to the stack_t stack;
 * @x: data (n) of the newly pushed node;
 * @head: top of the stack.
 *
 * Return: Void.
*/
void push(stack_t **head, int x)
{
    stack_t *tmp = malloc(sizeof(stack_t));

    if (!tmp)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    tmp->n = x;
    tmp->prev = NULL;
    tmp->next = *head;
    *head = tmp;
}

/**
 * pall - prints all values (n) on the stack_t stack, starting from the top.
 * @head: top of the stack.
 *
 * Return: Void.
*/
void pall(stack_t *head)
{
    stack_t *tmp = head;

    while (tmp)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}

/**
 * isEmpty - checks if stack is empty.
 * @stack: stack_t stack.
 *
 * Return: 1 if Empty, 0 if not.
*/
size_t isEmpty(stack_t *stack)
{
    if (stack)
        return (0);
    return (1);
}