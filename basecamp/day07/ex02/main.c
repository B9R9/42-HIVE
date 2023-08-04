#include <stdio.h>

int		*ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min;
	int max;
	int i;
	int *range;
	int *it;

	min = 2;
	max = 8;
	it = ft_ultimate_range(&range,min, max);
	i = 0;
	while (i < 7)
	{
		printf("%d\n", *it);
		i++;
	}
	return (0);
}
