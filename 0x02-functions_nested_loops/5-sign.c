#include "main.h"

/**
 *Prototype: int print_sign(int n);
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 */

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n == 0) {
        printf("0");
        return 0;
    } else {
        printf("-");
        return -1;
    }
}
