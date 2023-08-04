#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		triple_lenombre(int nb)
{
	return (nb * 3);
}

int main(void)
{
	int *arr;
	int *result;
	int size;
	int i;

	size = 100;
	arr = (int*)malloc(sizeof(int) * size);
	i = 0;
	while(i < size)
	{
		arr[i] = i ;
		i++;
	}
	
	result = ft_map(arr, size, &triple_lenombre);

	i = 0;
	while(i<size)
	{
		printf("Valeur de retour = %d\n", result[i]);
		i++;
	}
}
