#include <stdio.h>

void		ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 8;
	b = 15;
	printf("avant: %d et %d",a ,b);
	ft_swap(&a, &b);
	printf("apres: %d et %d",a ,b);
}
