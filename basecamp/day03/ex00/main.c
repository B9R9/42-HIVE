
#include <stdio.h>
void		ft_ft(int *nbr);

int		main(void)
{
	int a;

	a = 0;
	printf("before: %d\n", a);
	ft_ft(&a);
	printf("after : %d\n", a);
}
