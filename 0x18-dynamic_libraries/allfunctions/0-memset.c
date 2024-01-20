#include "main.h"
/**
*_memset - Fills a block of memory with a specific value.
*@s: The starting address of the memory to be filled.
*@b: The desired value to fill the memory with.
*@n: The number of bytes to be changed.
*Return: A modified array with the new value for the specified number of bytes.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

