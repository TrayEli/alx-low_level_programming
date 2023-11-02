#include <stdio.h>
#include "main.h"
/**
 * main - Entry point for the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description:
 * This function serves as the entry point for the program and
 * prints the number of command-line arguments passed to it.
 *
 * Return:
 * 0 on success (always)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

