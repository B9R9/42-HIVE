#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char*));

int		if_is(char *c)
{
	if (*c == 'B')
		return (1);
	return(0);
}

int		main(void)
{
	char *tab[] = {"AGFVV","jdhbc","Blvnlös","Blsdn",0};
	int length = 4;
	int result;
	// tab = malloc(length * sizeof(char *));

	 result = ft_count_if(tab, length, &if_is);
	printf("le retour de ft_any = %d\n", ft_count_if(tab, length, &if_is));
}