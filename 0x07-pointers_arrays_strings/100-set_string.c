#include "main.h"

/**
  *set_string - copy a pointed string to another
  *@s: string source
  *@to: string destination
  */

void set_string(char **s, char *to)
{
	size_t z;
	size_t lnth = strlen(to);

	*s = (char *)malloc((lnth + 1) * sizeof(char));

	for (z = 0; z < lnth; z++)
	{
		(*s)[z] = to[z];
	}
}
