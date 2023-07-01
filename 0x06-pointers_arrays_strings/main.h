#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);

#include <string.h>

#include <stdlib.h>

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *alph);

char *cap_string(char *f_lttr);

#include <ctype.h>

char *leet(char *subt);

#endif /* MAIN_H */
