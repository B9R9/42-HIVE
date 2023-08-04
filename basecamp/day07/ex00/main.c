
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char s[] = "Hello";// A essaye avec \n \t \r
	char *s1;

	s1 = ft_strdup(s);
	printf("%s\n", s1);
	free(s1);
	return (0);
}
