#include "monty.h"
#include <stdio.h>
#define _GNU_SOURCE
#include <stdlib.h>

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - function for monty code interpreter
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
char *content;
FILE *file;
size_t size = 0;
ssize_t read_line = 1;
stack_t *stack = NULL;
unsigned int counter = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
bus.file = file;
if (!file)
{
