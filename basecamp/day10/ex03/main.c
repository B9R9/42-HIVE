#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		if_is(char *c)
{
	if (*c == 'A')
		return (1);
	return(0);
}

int		main(void)
{
	char **tab;
	tab = malloc(6 * sizeof(char *));

	tab[0] = "B";
	tab[1] = "B";
	tab[2] = "B";
	tab[3] = "A";
	tab[4] = "B";
	tab[5] = 0;
	
	printf("le retour de ft_any = %d\n", ft_any(tab,&if_is));
}
