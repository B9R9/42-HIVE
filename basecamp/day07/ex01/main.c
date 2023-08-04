#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int min;
	int max;
	int i;
	int *test;

	min = 2;
	max = 8;
	i = 0;
	test = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", test[i]);
		i++;
	}
	// free(test);
	return (0);
}
