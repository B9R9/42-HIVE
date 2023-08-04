
#include <unistd.h>

void		ft_putnbr(int nb);
void		ft_putchar(char c);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	
	// ft_putnbr(1);
	// ft_putnbr(-89952);
	// ft_putnbr(985651);
	ft_putnbr(2147483647);

	

	return (0);
}
