#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

#endif