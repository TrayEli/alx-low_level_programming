#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful" -
 *              Dora Korpar, 2015-10-19, followed by a new line,
 *              to the standard error.
 *
 * Return: 1 (Failure)
 */
int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = sizeof(message) - 1;

	write(STDERR_FILENO, message, len);

	return (1);
}
