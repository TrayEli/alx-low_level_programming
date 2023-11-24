#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another
 * @num1: First number
 * @num2: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
    int index;
    unsigned int bitCount = 0;
    unsigned long int currentBit;
    unsigned long int xorResult = num1 ^ num2;

    for (index = 63; index >= 0; index--)
    {
        currentBit = xorResult >> index;
        if (currentBit & 1)
            bitCount++;
    }

    return bitCount;
}

