#include "monty.h"

/**
 * addnode - function that adds node to the head stack
 * @head: head of the stack
 * @n: new value
 * Return: nothing
 */
void addnode(stack_t **head, int n)
{
stack_t *new_node, *temp;
