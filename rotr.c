#include "monty.h"

/**
 * f_rotr - function that rotates the stack to the bottom
 * @head: stack head of the stack
 * @counter: line count
 *
 * Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;
