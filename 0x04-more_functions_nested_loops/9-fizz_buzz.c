#include "main.h"
#include <stdio.h>

/**
*main - prints number from 1 to 100
*Return: 0
*/
int main(void)
{
int numb = 1;

while (numb <= 100)
{
	if ((numb % 3 == 0) && (numb % 5 == 0))
{
	printf("FizzBuzz");
}
	else if (numb % 3 == 0)
{
	printf("Fizz");
}
	else if (numb % 5 == 0)
{
	printf("Buzz");
}
	else
{
	printf("%d", numb);
}
	numb++;
	if (numb != 101)
{
	printf(" ");
}
}
printf("\n");

return (0);
}
