#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, repeated 10 times
 */
void print_alphabet_x10(void)
{
int i;
char ch;
while (i < 10)
{
ch = 'a';
while(ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}