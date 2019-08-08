#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif