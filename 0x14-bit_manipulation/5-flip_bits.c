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
    unsigned int bit_count = 0;
    unsigned long int exclusive_or_result = num1 ^ num2;

    // Count set bits using Brian Kernighan's algorithm
    while (exclusive_or_result) {
        exclusive_or_result &= (exclusive_or_result - 1);
        bit_count++;
    }

    return bit_count;
}

