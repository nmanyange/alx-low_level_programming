#include <stdio.h>

/**
 * main - prints the number of arguments passedinto it
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments
 * Return: 0 on success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
