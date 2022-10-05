#include "monty.h"

/**
 * f_rotl- function that rotates the stack to the top
 * @head: head of the stack
 * @counter: line count
 *
 * Return: nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;
