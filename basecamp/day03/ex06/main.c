#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int main(void)
{
	char str[] = "Hello World!";
	int count;

	count = ft_strlen(str);
	printf("La chaine de caractere:< %s > mesure %d",str, count);
	return (0);

}