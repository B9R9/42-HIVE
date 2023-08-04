#include <unistd.h>
#include <stdio.h>

int			ft_putchar(char c);
void		ft_putstr(char 	*str);



int main(void)
{
	char 	str [] = "If we can't live together, we're gonna die alone! Jack Shepard";

	
	ft_putstr(str);

	return(0) ;

}