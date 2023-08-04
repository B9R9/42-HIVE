#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 100;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("Division result = %d\n",div);
	printf("modulo result = %d\n", mod);
}
