#include "main.h"

/**
  *set_string - copy a pointed string to another
  *@s: string source
  *@to: string destination
  */

void set_string(char **s, char *to)
{
	*s = (char *)malloc((strlen(to) + 1) * sizeof(char));
	strcpy(*s, to);
}
