#include <stdio.h>
#include <unistd.h>

void		ft_putstr(char *str);

int		main(void)
{
	char *str;

	str = "42 is Maybe it does not work as expected ?!";
	ft_putstr(str);
	return (0);
}
