#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int main(int __attribute__((__unused__)) argc, char *argv[]);
void print_opcodes(int num_bytes);
int main(int argc, char *argv[]);

#endif
