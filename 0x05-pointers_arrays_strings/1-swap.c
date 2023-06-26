#include "main.h"

/**
*swap_int - a function to swap two integers
*@a: variable of first integer to swapped
*@b: variable of second integer to swapped
*/
void swap_int(int *a, int *b)
{
int swp_int = *a;

*a = *b;

*b = swp_int;
}
