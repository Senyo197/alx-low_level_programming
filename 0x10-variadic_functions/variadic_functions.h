#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
void print_all(const char * const format, ...);

void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
