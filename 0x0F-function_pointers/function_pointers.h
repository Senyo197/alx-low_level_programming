#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdio.h>

void print_putchar(char c);
void print_name(char *name, void (*f)(char *));

void prnt_opcode(int number_of_bytes);
int main(int argc, char *argv[]);

#endif /* FUNCTION_POINTERS_H */
