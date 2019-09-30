#include <string.h>
#include <stdio.h>

int		main(void)
{
	char *one = "This string\0";
	const char *two = " needs more\0";

	strlcat(one, two, 22);
	printf("%s\n", two);
	printf("%s\n", one);
	return (0);
}
