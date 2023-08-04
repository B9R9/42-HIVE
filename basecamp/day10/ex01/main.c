#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int lenght, void (*f)(int));

void	ft_putnumber(int number)
{
	printf("Inside putnumber= %d\n", number);
}

int main(void)
{
	int *arr;
	int size;
	int i;

	size = 10;
	arr = (int*)malloc(sizeof(int) * size);
	i = 0;
	while(i < size)
	{
		arr[i] = i ;
		// printf("%d", tab[i]);
		i++;
	}
	ft_foreach(arr, size, &ft_putnumber);
	free(arr);
}
