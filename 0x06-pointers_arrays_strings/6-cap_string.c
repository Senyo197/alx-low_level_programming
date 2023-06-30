#include "main.h"

/**
*cap_string - capitalize all words
*@f_lttr: argument to check words
*Return: capitalized first words
*/

char *cap_string(char *f_lttr)
{
int cap_next;

size_t a = 0;

size_t wd_lnth = strlen(f_lttr);

while (a < wd_lnth)
{
	if (isspace(f_lttr[a]) || f_lttr[a] == ',' || f_lttr[a] == '.' ||
f_lttr[a] == ';' || f_lttr[a] == '!' || f_lttr[a] == '"' || f_lttr[a] == '('
|| f_lttr[a] == ')' || f_lttr[a] == '{' || f_lttr[a] == '}' || f_lttr[a]
== '?')
{
	cap_next = 1;
}
	else
{
	if (cap_next && islower(f_lttr[a]))
{
	f_lttr[a] = toupper(f_lttr[a]);
	cap_next = 0;
}
	else if (!cap_next && isupper(f_lttr[a]))
{
	f_lttr[a] = tolower(f_lttr[a]);
}
	cap_next = 0;
}
	a++;
}
return (f_lttr);
}
