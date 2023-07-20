#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdio.h>

void print_putchar(char c);
void print_name(char *name, void (*f)(char *));

int main(int argc, char *argv[]);
void prnt_opcode(int number_of_bytes);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
